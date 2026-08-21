A C++ console-based Library Management System developed using Object-Oriented Programming concepts. The application provides basic functionality to manage books and members, issue and return books, and search for books by title or author.

Project Overview

The Library Management System is designed to simplify basic library operations through a menu-driven console application. It uses C++ classes and file handling to organize book and member information.

The project demonstrates practical implementation of:

Object-Oriented Programming
Classes and Objects
Encapsulation
Vectors
File Handling
Searching
Menu-driven programming
Git and GitHub version control
Features
Book Management
Add new books
Store book ID, title, and author
Display all available books
Track book availability
Prevent duplicate book IDs
Member Management
Add new members
Store member ID and name
Display registered members
Prevent duplicate member IDs
Book Issue and Return
Issue an available book
Return an issued book
Automatically update book availability
Save updated book status
Book Search

Books can be searched using:

Book title
Author name
Technologies Used
Technology	Purpose
C++	Application development
OOP	Program structure
STL Vector	Store books and members
File Handling	Store application data
Visual Studio Code	Development environment
Git	Version control
GitHub	Project hosting
Project Structure
Library-Management-System/
│
├── .vscode/
│   ├── c_cpp_properties.json
│   ├── launch.json
│   └── settings.json
│
├── data/
│   ├── books.txt
│   └── member.txt
│
├── include/
│   ├── Book.h
│   ├── Member.h
│   └── Library.h
│
├── src/
│   ├── Book.cpp
│   ├── Member.cpp
│   ├── Library.cpp
│   └── main.cpp
│
├── .gitignore
└── README.md
Application Menu
====================================
       LIBRARY MANAGEMENT SYSTEM
====================================
1. Add Book
2. Add Member
3. Display Books
4. Display Members
5. Issue Book
6. Return Book
7. Search Book
8. Exit
------------------------------------
Enter your choice:
How to Run
Prerequisites

Install:

Visual Studio Code
C++ compiler such as MinGW/GCC
C/C++ extension for Visual Studio Code

Verify the compiler:

g++ --version
Clone the Repository
git clone https://github.com/dileepchauhan28/Library-Management-System.git

Move into the project directory:

cd Library-Management-System
Compile

Run:

g++ src/main.cpp src/Book.cpp src/Member.cpp src/Library.cpp -Iinclude -o library.exe
Run

On Windows:

.\library.exe
Sample Operations
Adding a Book
Enter Book ID: 101
Enter Book Title: C++ Programming
Enter Author Name: Bjarne Stroustrup


Book added successfully!
Adding a Member
Enter Member ID: 1
Enter Member Name: Dileep


Member added successfully!
Displaying Books
========== BOOK LIST ==========
ID: 101 | Title: C++ Programming | Author: Bjarne Stroustrup | Status: Available
Issuing a Book
Enter Book ID to issue: 101


Book issued successfully!
Returning a Book
Enter Book ID to return: 101


Book returned successfully!
Searching for a Book
Search Book By:
1. Title
2. Author
Enter choice: 1


Enter search keyword: C++


ID: 101 | Title: C++ Programming | Author: Bjarne Stroustrup | Status: Available
Data Storage

The project uses text files inside the data directory to store application information.

data/
├── books.txt
└── member.txt

Book information is stored using fields such as:

Book ID | Title | Author | Status

Member information is stored using:

Member ID | Name
Object-Oriented Design

The project is divided into separate classes.

Book Class

Responsible for:

Book identification
Title
Author
Availability status
Issue operation
Return operation
Member Class

Responsible for:

Member identification
Member name
Member information display
Library Class

Responsible for:

Managing books
Managing members
Adding records
Displaying records
Issuing books
Returning books
Searching books
File storage
Learning Outcomes

Through this project, the following concepts were practiced:

Designing classes using C++
Applying encapsulation
Using constructors
Using vectors for data management
Implementing file input/output
Creating menu-driven applications
Handling multiple source and header files
Compiling multi-file C++ projects
Using Git for version control
Publishing projects on GitHub
Future Enhancements

Possible future improvements include:

Improved input validation
Case-insensitive search
Update and delete book/member records
Graphical user interface
Database integration
Advanced reporting features
Author

Dileep Chauhan

GitHub:
https://github.com/dileepchauhan28

License

This project is created for educational and internship purposes.
