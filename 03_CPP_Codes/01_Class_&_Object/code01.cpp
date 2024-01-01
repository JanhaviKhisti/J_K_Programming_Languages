
/**
 * @file: code01.cpp
 * @brief: Demonstration of class and object in CPP
 * @author: Janhavi Khisti(janhavikhisti@gmail.com)
 * @date: 01/01/2024 (Monday)
 */

 // Headers
 #include <iostream>

// Class Type Definition
class Student 
{
private:
	// Data Members
	char* m_name;
	int m_rollno;
	long long m_contact;

public:
	// Member Functions
	// Constructor
	Student()
	{
		// Code

		// Initializa default values to data members
		m_rollno = 0;
		m_contact = 0;
		m_name = nullptr;
	}

	// Constructor -> Parameterized Constructor
	/**
	 * Function: Constructor of class Student that initialized with parameters values
	 * 
	 * identifier: Student
	 * params: 	1) Name -> char*
	 * 			2) Rollno -> int
	 * 			3) Contact -> long long
	 * returns: None
	 */
	Student(char* init_name, int init_rollno, long long init_contact)
	{
		// Code

		m_name = init_name;
		m_rollno = init_rollno;
		m_contact = init_contact;
	}

	/** 
	 * Function: Function to set name
	 * 
	 * identifier: SetName
	 * params:	Name of the student -> char*
	 * returns:	None
	 */
	void SetName(char* new_name)
	{
		// Code

		m_name = new_name;
	}

	/**
	 * Function: Function to get name
	 * 
	 * identifier: GetName
	 * params: None
	 * returns: Name of Student
	 */
	char* GetName(void)
	{
		// Code

		return(m_name);
	}

	/**
	 * Function: Function to set rollno
	 * 
	 * identifier: SetRollno
	 * params: int
	 * returns: none
	 */
	void SetRollno(int new_rollno)
	{
		// Code

		m_rollno = new_rollno;
	}

	/**
	 * 
	 * Function: Function to get rollno
	 * 
	 * identifier: GetRollno
	 * params: none
	 * returns: int
	 */
	int GetRollno(void)
	{
		// Code

		return(m_rollno);
	}

	/**
	 * Function: Function to set contact
	 * 
	 * identifier: SetContact
	 * params: long long
	 * returns: None
	 */
	void SetContact(long long new_contact)
	{
		// Code
		m_contact = new_contact;
	}

	/**
	 * Function: Function to get contact 
	 * 
	 * identifier: GetContact
	 * params: None
	 * returns: long long
	 */
	long long GetContact(void)
	{
		// Code
		return(m_contact);
	}
};

// Entry Point Function
int main(int argc, char** argv)
{
	// Code

	Student student_01("Janhavi", 001, 9876543210);
	Student student_02("Kalyani", 002, 9517536482);
	Student student_03("Vivek", 003, 9988776655);
	Student student_04("Gaurav", 004, 9753113579);
	Student student_05("Snehal", 005, 9887766554);

	std::cout << student_01.GetName() << std::endl;
	std::cout << student_02.GetName() << std::endl;
	std::cout << student_03.GetName() << std::endl;
	std::cout << student_04.GetName() << std::endl;
	std::cout << student_05.GetName() << std::endl;

	std::cout << student_03.GetRollno() << std::endl;
	std::cout << student_04.GetContact() << std::endl;
	std::cout << student_02.GetContact() << std::endl;

	exit(EXIT_SUCCESS);
}
