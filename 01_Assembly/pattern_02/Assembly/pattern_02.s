
# Pattern No : 02

# *   *   *   *   *
# *   *   *   *
# *   *   *
# *   *
# *

# Section ROData
.section .rodata

.msg_p_star:
    .string "* "

.msg_p_nl:
    .string "\n"


# Section Data


# Section Text
.section .text

  .globl _start
  .type _start, @function

  .equ ole_ml, -4
  .equ le_ml, -8

_start:

    # Prologue 
    pushl %ebp
    movl %esp, %ebp

    subl $8, %esp

    # Main Code

    #Initialization
    movl $5, ole_ml(%ebp)

    # Outer Loop
    .loop_ole:

        # Condition
        # ole >= 0
        movl ole_ml(%ebp), %ebx
        cmpl $0, %ebx

        jl .loop_end_ole

            # Loop Body
            # Initialization
            movl $0, le_ml(%ebp)

            # Inner Loop
            .loop_le:

                # Condition
                # le < ole
                movl le_ml(%ebp), %ebx
                movl ole_ml(%ebp), %ecx

                cmpl %ecx, %ebx

                jge .loop_end_le

                    # Loop Body
                    pushl $.msg_p_star
                    call printf
                    addl $4, %esp

                # increment
                incl le_ml(%ebp)

                jmp .loop_le

            .loop_end_le:

            pushl $.msg_p_nl
            call printf
            addl $4, %esp

        # decrement
        decl ole_ml(%ebp)

        jmp .loop_ole

    .loop_end_ole:

    # Epilogue
    addl $8, %esp

    pushl $0
    call exit


