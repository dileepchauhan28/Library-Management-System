# 📚 Library Management System

A console-based **Library Management System** developed in C++ to efficiently manage books and library members using **Object-Oriented Programming, file handling, searching, and book issue/return operations**.

This project was developed as part of my **C++ Programming Internship at Thiranex** to demonstrate practical programming, problem-solving, software development, and Git/GitHub skills.

---

## 📌 Project Overview

The Library Management System provides a simple and efficient way to manage basic library operations through a menu-driven console application.

The application allows users to:

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

The project is implemented using multiple C++ classes and source files to demonstrate modular and object-oriented programming.

---

## 🎯 Objectives

The main objectives of this project are:

* To develop a Library Management System using C++.
* To apply Object-Oriented Programming concepts.
* To manage book and member records efficiently.
* To implement book issue and return functionality.
* To provide book search functionality by title and author.
* To implement file handling for data storage.
* To practice modular programming using header and source files.
* To use Git and GitHub for version control.
* To develop a practical console-based application.

---

## ✨ Features

### 📖 Book Management

The system allows users to:

* Add new books
* Enter Book ID
* Enter book title
* Enter author name
* Display all books
* Track book availability
* Prevent duplicate Book IDs

### 👤 Member Management

The system allows users to:

* Add new members
* Enter Member ID
* Enter member name
* Display all registered members
* Prevent duplicate Member IDs

### 📕 Issue Book

Users can issue an available book using its Book ID.

The system checks whether:

* The book exists
* The book is available

If the book is already issued, an appropriate message is displayed.

### 📗 Return Book

Users can return an issued book using its Book ID.

The system checks whether:

* The book exists
* The book is currently issued

After returning, the book status is changed to **Available**.

### 🔎 Search Book

Books can be searched using:

* Book Title
* Author Name

The system displays all matching books.

### 💾 File Handling

Book and member information is stored using text files.

The data is maintained inside the `data` directory.

---

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| **C++** | Application development |
| **Object-Oriented Programming** | Program architecture |
| **STL Vector** | Store books and members |
| **File Handling** | Data storage |
| **String Handling** | Book and author searching |
| **Visual Studio Code** | Development environment |
| **MinGW / GCC** | C++ compiler |
| **Git** | Version control |
| **GitHub** | Project hosting |

---

## 🧠 OOP Concepts Used

The project demonstrates the following Object-Oriented Programming concepts:

### Classes and Objects

The project uses three main classes:

* `Book`
* `Member`
* `Library`

### Encapsulation

Data members such as Book ID, title, author, availability, Member ID, and member name are kept private and accessed through public member functions.

### Constructors

Constructors are used to initialize Book and Member objects.

### Abstraction

Library operations such as adding books, issuing books, returning books, and searching are implemented inside the `Library` class.

### Modular Programming

The project separates class declarations into header files and implementations into source files.

---

## 📂 Project Structure

```text
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

## 📄 File Description

### `Book.h`

Contains the declaration of the `Book` class.

Responsible for:

* Book ID
* Book title
* Author name
* Availability status
* Issue operation
* Return operation
* Display operation

### `Member.h`

Contains the declaration of the `Member` class.

Responsible for:

* Member ID
* Member name
* Member information display

### `Library.h`

Contains the declaration of the `Library` class.

Responsible for:

* Managing books
* Managing members
* Adding records
* Displaying records
* Issuing books
* Returning books
* Searching books

### `Book.cpp`

Contains the implementation of the `Book` class.

### `Member.cpp`

Contains the implementation of the `Member` class.

### `Library.cpp`

Contains the implementation of the main library management operations.

The class handles:

* Adding books
* Adding members
* Displaying books
* Displaying members
* Issuing books
* Returning books
* Searching books

### `main.cpp`

Contains the main program and menu-driven interface of the Library Management System.

### `data/books.txt`

Stores book information using text-file storage.

### `data/member.txt`

Stores registered member information using text-file storage.

---

## 🖥️ Application Menu

```text
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
