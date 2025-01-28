# University Management System 

## Overview
The **University Management System** is a simple C++ program that allows the management of student data, including adding, searching, and updating student information. This program stores the data in memory (using vectors) and does not rely on any external file system for persistence. It offers an interactive command-line interface to perform operations like adding new students, searching for student records, and updating existing student data.

## Features
- **Add Student**: Allows the user to input details (Roll No, Name, Subject, and Address) for a new student and add it to the system.
- **Search Student**: Lets the user search for a student using their Roll No. If the student is found, their details are displayed.
- **Update Student**: Enables the user to update the address of an existing student identified by their Roll No.
- **Exit**: Exits the program with a goodbye message.

## Functionality

### Classes:
1. **University Class**:
   - Stores information about a student, including:
     - Roll No
     - Name
     - Subject
     - Address
   - Methods for setting and getting each of these attributes.

2. **UniversitySystem Class**:
   - Manages the collection of `University` objects (students).
   - Allows adding, searching, and updating students in memory.

### User Interface:
The system operates through a simple text-based menu:
- **Option 1**: Add a student.
- **Option 2**: Search for a student by Roll No.
- **Option 3**: Update a student's address by Roll No.
- **Option 4**: Exit the system.

## How to Use

1. **Add Student**:
   - The user is prompted to input the student’s Roll No, Name, Subject, and Address.
   - The student’s information is then stored in the system.
   - Output: Confirmation message: `"Student Added Successfully!"`

2. **Search Student**:
   - The user is prompted to input the Roll No of the student they wish to search for.
   - If the student is found, their details are displayed.
   - Output:
     ```
     <RollNo> : <Name> : <Subject> : <Address>
     ```
   - If the student is not found, a message is displayed: `"Student Not Found!"`

3. **Update Student**:
   - The user is prompted to input the Roll No of the student whose address they wish to update.
   - If the student is found, the user is asked to enter a new address for the student.
   - Output: Confirmation message: `"Data Updated!"`
   - If the student is not found, a message is displayed: `"Student Not Found!"`

4. **Exit**:
   - The program exits with a goodbye message: `"Good Luck!"`

## Example Output

### Adding a Student
```
	Welcome To University Management System
	***************************************
	1. Add Student.
	2. Search Student.
	3. Update Data Of Student.
	4. Exit.
	Enter Your Choice: 1

	Enter RollNo Of Student: 12345
	Enter Name Of Student: John
	Enter Subject Of Student: Computer Science
	Enter Address Of Student: 123 Main St

	Student Added Successfully!
```

### Searching for a Student
```
	Welcome To University Management System
	***************************************
	1. Add Student.
	2. Search Student.
	3. Update Data Of Student.
	4. Exit.
	Enter Your Choice: 2

	Enter RollNo Of Student: 12345

	12345 : John : Computer Science : 123 Main St
```

### Updating a Student's Address
```
	Welcome To University Management System
	***************************************
	1. Add Student.
	2. Search Student.
	3. Update Data Of Student.
	4. Exit.
	Enter Your Choice: 3

	Enter RollNo Of Student: 12345
	Enter New Address: 456 New St

	Data Updated!
```

### Exiting the Program
```
	Welcome To University Management System
	***************************************
	1. Add Student.
	2. Search Student.
	3. Update Data Of Student.
	4. Exit.
	Enter Your Choice: 4

	Good Luck!
```
