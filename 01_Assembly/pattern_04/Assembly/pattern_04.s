# Pattern No : 04

# 	*	*	*	*	*
# 	 	*	*	*	*
# 	 	 	*	*	*
# 				*	*
# 					*

# Section ROData 
.section .rodata

.msg_p_star:
    .string "*\t"

.msg_p_tab:
    .string "\t"

.msg_p_nl:
    .string "\n"


# Section Data

# Section BSS

# Section Text
.section .text

  .globl _start
  .type _start, @function

  .equ ole_ml, -4
  .equ ile_ml, -8

_start:

    # Prologue
    pushl %ebp
    movl %esp, %ebp

    subl $8, %esp

    # Main Code

    # Initialization
    movl $4, ole_ml(%ebp)

    # Outer Loop
    .loop_ole:

        # Condition 
        cmpl $0, ole_ml(%ebp)

        jl .loop_end_ole

            # Loop Body
            # Initialization
            movl $5, ile_ml(%ebp)

            # Inner Loop
            .loop_ile:

                # Condition
                cmpl $0, ile_ml(%ebp)

                jl .loop_end_ile

                    # Loop Body
                    # Condition(ile <= ole)
                    movl ile_ml(%ebp), %ebx
                    movl ole_ml(%ebp), %ecx

                    cmpl %ecx, %ebx

                    jg .print_tab

                    # Condition(ile-ole<= 4)
                    movl ile_ml(%ebp), %eax
                    movl ole_ml(%ebp), %ecx

                    subl %ecx, %eax

                    cmpl $4, %eax

                    jg .print_tab

                        # True Block
                        pushl $.msg_p_star
                        call printf
                        addl $4, %esp

                        jmp .decrement

                        # False Block
                        .print_tab:

                        pushl $.msg_p_tab
                        call printf
                        addl $4, %esp

                # Decrement
                .decrement:
                decl ile_ml(%ebp)

                jmp .loop_ile

            .loop_end_ile:

            pushl $.msg_p_nl
            call printf
            addl $4, %esp

        # Decrement
        decl ole_ml(%ebp)

        jmp .loop_ole

    .loop_end_ole:

    # Epilogue
    addl $8, %esp

    pushl $0
    call exit


