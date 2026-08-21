# 📚 Library Management System

A simple and efficient **Library Management System** developed in **C++** using **Object-Oriented Programming (OOP)** concepts and file handling.

The application is a **menu-driven console application** that allows users to manage books, library members, and book issue/return operations.

---

## 📌 Project Overview

The Library Management System provides a simple and efficient way to manage basic library operations through a menu-driven console application.

The system allows the librarian to:

* Add new books
* Add new library members
* Display all books
* Display all registered members
* Issue books
* Return books
* Search books by title
* Search books by author
* Track book availability
* Store book and member information using files
* Prevent duplicate Book IDs
* Prevent duplicate Member IDs

The project is implemented using **multiple C++ classes and source files** to demonstrate modular and object-oriented programming.

---

## 🎯 Objectives

The main objectives of this project are:

1. To develop a simple Library Management System using C++.
2. To demonstrate Object-Oriented Programming concepts.
3. To implement book and member management.
4. To provide book issue and return functionality.
5. To implement searching by book title and author.
6. To maintain book availability status.
7. To store data permanently using file handling.
8. To prevent duplicate Book IDs and Member IDs.
9. To develop a modular and easy-to-maintain application.

---

## ✨ Features

### 📖 Book Management

* Add new books
* Display all books
* Search books by title
* Search books by author
* Track whether a book is available or issued
* Prevent duplicate Book IDs

### 👤 Member Management

* Add new library members
* Display all registered members
* Prevent duplicate Member IDs

### 🔄 Book Transactions

* Issue available books to members
* Return issued books
* Automatically update book availability
* Prevent issuing an already issued book

### 💾 File Handling

The application uses files to store information so that data is retained even after the program is closed.

Stored information includes:

* Book records
* Member records
* Book issue/return status

---

## 🛠️ Technologies Used

| Technology                  | Purpose                       |
| --------------------------- | ----------------------------- |
| C++                         | Main programming language     |
| Object-Oriented Programming | Program structure             |
| File Handling               | Data storage                  |
| STL                         | Data management and utilities |
| Visual Studio Code          | Development environment       |
| MinGW / G++                 | C++ compiler                  |
| Git                         | Version control               |
| GitHub                      | Source code hosting           |

---

## 🧠 OOP Concepts Used

This project demonstrates several important Object-Oriented Programming concepts:

### 1. Classes and Objects

Separate classes are used to represent different entities such as:

* Books
* Members
* Library

### 2. Encapsulation

Data and related functions are grouped together inside classes.

### 3. Abstraction

Complex operations such as issuing and returning books are handled through simple class functions.

### 4. Modular Programming

The project is divided into multiple source and header files, making the code easier to understand and maintain.

---

## 📂 Project Structure

```text
Library-Management-System/
│
├── src/
│   ├── main.cpp
│   ├── Book.cpp
│   ├── Member.cpp
│   └── Library.cpp
│
├── include/
│   ├── Book.h
│   ├── Member.h
│   └── Library.h
│
├── data/
│   ├── books.txt
│   └── members.txt
│
├── screenshots/
│   ├── menu.png
│   ├── add-book.png
│   ├── add-member.png
│   ├── issue-book.png
│   ├── return-book.png
│   └── search-book.png
│
├── .gitignore
└── README.md
```

> The exact file names may vary depending on the final implementation.

---

## ⚙️ Application Workflow

The application starts with a menu-driven interface.

```text
                ┌──────────────────────────┐
                │  Library Management      │
                │        System            │
                └────────────┬─────────────┘
                             │
                             ▼
                    ┌─────────────────┐
                    │   Main Menu     │
                    └────────┬────────┘
                             │
          ┌──────────────────┼──────────────────┐
          │                  │                  │
          ▼                  ▼                  ▼
    Book Management    Member Management   Transactions
          │                  │                  │
     ┌────┴────┐        ┌────┴────┐       ┌────┴─────┐
     ▼         ▼        ▼         ▼       ▼          ▼
   Add       Search    Add      Display   Issue     Return
   Book      Book      Member   Members   Book       Book
     │         │
     └────┬────┘
          ▼
     Display Books
          │
          ▼
     Save Data to Files
```

---

## 🖥️ Main Menu

When the application starts, the user is presented with a menu similar to:

```text
========================================
       LIBRARY MANAGEMENT SYSTEM
========================================

1. Add Book
2. Add Member
3. Display Books
4. Display Members
5. Issue Book
6. Return Book
7. Search Book by Title
8. Search Book by Author
9. Exit

Enter your choice:
```

---

## 📖 Adding a Book

The user can add a new book by entering details such as:

* Book ID
* Book title
* Author name

The system checks whether the Book ID already exists.

If the ID already exists, the system prevents the duplicate entry.

Example:

```text
Enter Book ID: B101
Enter Book Title: Data Structures
Enter Author: Mark Allen

Book added successfully!
```

---

## 👤 Adding a Member

New library members can be registered by providing:

* Member ID
* Member name

The system checks for duplicate Member IDs before adding a new member.

Example:

```text
Enter Member ID: M101
Enter Member Name: Rahul

Member added successfully!
```

---

## 🔄 Issuing a Book

A book can only be issued if it is currently available.

The system checks:

1. Whether the Book ID exists.
2. Whether the Member ID exists.
3. Whether the book is available.
4. Updates the book status after successful issue.

Example:

```text
Enter Book ID: B101
Enter Member ID: M101

Book issued successfully!
```

If the book is already issued:

```text
Book is currently unavailable.
```

---

## ↩️ Returning a Book

When a book is returned, the system updates its availability status.

Example:

```text
Enter Book ID: B101

Book returned successfully!
```

The book becomes available for issuing again.

---

## 🔍 Search Functionality

The application supports searching books using:

### Search by Title

```text
Enter Book Title: Data Structures

Book Found!
ID: B101
Title: Data Structures
Author: Mark Allen
Status: Available
```

### Search by Author

```text
Enter Author Name: Mark Allen

Book Found!
ID: B101
Title: Data Structures
Author: Mark Allen
Status: Available
```

---

## 💾 Data Persistence

The project uses **file handling** to store library information.

Example files:

```text
data/
├── books.txt
└── members.txt
```

This allows the application to retain records between program executions.

For example:

```text
Book ID: B101
Title: Data Structures
Author: Mark Allen
Status: Available
```

---

## 🔐 Duplicate ID Prevention

The system prevents duplicate identifiers.

### Duplicate Book ID

```text
Enter Book ID: B101

Error: Book ID already exists!
```

### Duplicate Member ID

```text
Enter Member ID: M101

Error: Member ID already exists!
```

This helps maintain unique records within the system.

---

## 🖼️ Screenshots

Screenshots of the application can be added to the `screenshots` folder.

### Main Menu

![Main Menu](screenshots/menu.png)

### Adding a Book

![Add Book](screenshots/add-book.png)

### Adding a Member

![Add Member](screenshots/add-member.png)

### Issuing a Book

![Issue Book](screenshots/issue-book.png)

### Returning a Book

![Return Book](screenshots/return-book.png)

### Searching for a Book

![Search Book](screenshots/search-book.png)

> If you do not have screenshots, you can remove this section until they are available.

---

## 💻 Requirements

To run this project, you need:

* Windows / Linux / macOS
* C++ compiler
* G++ / MinGW
* Visual Studio Code or another C++ IDE
* Git (optional, for cloning the repository)

---

## 🚀 How to Run

### Step 1: Clone the Repository

```bash
git clone https://github.com/YOUR-USERNAME/Library-Management-System.git
```

### Step 2: Open the Project

Open the project folder in **Visual Studio Code**.

### Step 3: Compile the Program

If all source files are located inside the `src` folder:

```bash
g++ src/*.cpp -Iinclude -o LibraryManagementSystem
```

### Step 4: Run the Application

On Windows:

```bash
LibraryManagementSystem.exe
```

On Linux/macOS:

```bash
./LibraryManagementSystem
```

---

## 🧪 Testing

The following operations can be tested:

| Test Case               | Expected Result                  |
| ----------------------- | -------------------------------- |
| Add a new book          | Book is added successfully       |
| Add duplicate Book ID   | Duplicate is rejected            |
| Add a new member        | Member is added successfully     |
| Add duplicate Member ID | Duplicate is rejected            |
| Display books           | All books are displayed          |
| Display members         | All members are displayed        |
| Issue available book    | Book is issued successfully      |
| Issue unavailable book  | Issue operation is rejected      |
| Return issued book      | Book becomes available           |
| Search by title         | Matching books are displayed     |
| Search by author        | Matching books are displayed     |
| Restart application     | Stored data is loaded from files |

---

## 📈 Future Enhancements

The project can be further improved by adding:

* Fine calculation for late returns
* Due-date tracking
* Multiple-book issue tracking
* Admin login and authentication
* Password protection
* Advanced search and filtering
* Book categories
* Publisher information
* Database integration using MySQL
* Graphical User Interface (GUI)
* Online library management
* Email/SMS notifications
* Book reservation functionality
* Detailed transaction history

---

## 🎓 Learning Outcomes

Through this project, the following concepts were practiced:

* C++ programming
* Object-Oriented Programming
* Classes and objects
* Encapsulation
* Abstraction
* Functions
* Conditional statements
* Loops
* Vectors/data structures
* File handling
* Modular programming
* Exception/error handling
* Git and GitHub
* Project documentation

---

## 📌 Advantages

* Simple and easy-to-use console interface
* Modular project structure
* Prevents duplicate IDs
* Maintains book availability
* Supports book searching
* Stores data permanently using files
* Demonstrates practical use of OOP
* Easy to extend with additional features

---

## 🔮 Conclusion

The **Library Management System** is a C++ console-based application designed to simplify common library operations such as managing books, registering members, issuing books, returning books, and searching for books.

The project demonstrates the practical implementation of **Object-Oriented Programming, modular programming, and file handling in C++**.

It provides a strong foundation for developing more advanced library management applications with databases, authentication, graphical interfaces, and online functionality.

---

## 👨‍💻 Author

**Dileep Chauhan**

* GitHub: `https://github.com/dileepchauhan28`
* Project: **Library Management System**

---

## 📄 License

This project is created for **educational and academic purposes**.

You are free to modify and improve the project for learning and development purposes.

---

## ⭐ Support

If you found this project useful, consider giving the repository a ⭐ on GitHub!

---

### 📌 Project Highlights

```text
Language        : C++
Application     : Console Based
Programming     : Object-Oriented Programming
Data Storage    : File Handling
IDE             : Visual Studio Code
Compiler        : G++ / MinGW
Version Control : Git
Platform        : GitHub
```

**Thank you for visiting this project! 📚💻**
