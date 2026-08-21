#include "../include/Library.h"

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// Constructor
Library::Library() {
    loadBooks();
    loadMembers();
}

// Add Book
void Library::addBook() {
    int id;
    string title, author;

    cout << "\nEnter Book ID: ";
    cin >> id;

    // Check for duplicate Book ID
    for (const Book& book : books) {
        if (book.getId() == id) {
            cout << "\nBook ID already exists.\n";
            return;
        }
    }

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title);

    cout << "Enter Author Name: ";
    getline(cin, author);

    books.push_back(Book(id, title, author));

    saveBooks();

    cout << "\nBook added successfully!\n";
}

// Add Member
void Library::addMember() {
    int id;
    string name;

    cout << "\nEnter Member ID: ";
    cin >> id;

    // Check for duplicate Member ID
    for (const Member& member : members) {
        if (member.getId() == id) {
            cout << "\nMember ID already exists.\n";
            return;
        }
    }

    cin.ignore();

    cout << "Enter Member Name: ";
    getline(cin, name);

    members.push_back(Member(id, name));

    saveMembers();

    cout << "\nMember added successfully!\n";
}

// Display Books
void Library::displayBooks() const {
    if (books.empty()) {
        cout << "\nNo books available.\n";
        return;
    }

    cout << "\n========== BOOK LIST ==========\n";

    for (const Book& book : books) {
        book.display();
    }
}

// Display Members
void Library::displayMembers() const {
    if (members.empty()) {
        cout << "\nNo members registered.\n";
        return;
    }

    cout << "\n========== MEMBER LIST ==========\n";

    for (const Member& member : members) {
        member.display();
    }
}

// Issue Book
void Library::issueBook() {
    int bookId;

    cout << "\nEnter Book ID to issue: ";
    cin >> bookId;

    for (Book& book : books) {

        if (book.getId() == bookId) {

            if (book.isAvailable()) {

                book.issueBook();

                saveBooks();

                cout << "\nBook issued successfully!\n";
            }
            else {
                cout << "\nBook is already issued.\n";
            }

            return;
        }
    }

    cout << "\nBook not found.\n";
}

// Return Book
void Library::returnBook() {
    int bookId;

    cout << "\nEnter Book ID to return: ";
    cin >> bookId;

    for (Book& book : books) {

        if (book.getId() == bookId) {

            if (!book.isAvailable()) {

                book.returnBook();

                saveBooks();

                cout << "\nBook returned successfully!\n";
            }
            else {
                cout << "\nBook is already available.\n";
            }

            return;
        }
    }

    cout << "\nBook not found.\n";
}

// Search Book
void Library::searchBook() const {
    int choice;
    string keyword;

    cout << "\nSearch Book By:\n";
    cout << "1. Title\n";
    cout << "2. Author\n";
    cout << "Enter choice: ";

    cin >> choice;

    if (choice != 1 && choice != 2) {
        cout << "\nInvalid search option.\n";
        return;
    }

    cin.ignore();

    cout << "Enter search keyword: ";
    getline(cin, keyword);

    bool found = false;

    for (const Book& book : books) {

        if (choice == 1 &&
            book.getTitle().find(keyword) != string::npos) {

            book.display();
            found = true;
        }

        else if (choice == 2 &&
                 book.getAuthor().find(keyword) != string::npos) {

            book.display();
            found = true;
        }
    }

    if (!found) {
        cout << "\nNo matching books found.\n";
    }
}

// Load Books from File
void Library::loadBooks() {

    ifstream file(BOOK_FILE);

    if (!file.is_open()) {
        return;
    }

    string line;

    while (getline(file, line)) {

        if (line.empty()) {
            continue;
        }

        stringstream ss(line);

        string idString;
        string title;
        string author;
        string status;

        getline(ss, idString, '|');
        getline(ss, title, '|');
        getline(ss, author, '|');
        getline(ss, status, '|');

        try {

            int id = stoi(idString);

            bool available = (status == "Available");

            books.push_back(
                Book(id, title, author, available)
            );

        }
        catch (...) {

            cout << "Invalid book data found in books.txt.\n";
        }
    }

    file.close();
}

// Load Members from File
void Library::loadMembers() {

    ifstream file(MEMBER_FILE);

    if (!file.is_open()) {
        return;
    }

    string line;

    while (getline(file, line)) {

        if (line.empty()) {
            continue;
        }

        stringstream ss(line);

        string idString;
        string name;

        getline(ss, idString, '|');
        getline(ss, name, '|');

        try {

            int id = stoi(idString);

            members.push_back(
                Member(id, name)
            );

        }
        catch (...) {

            cout << "Invalid member data found in member.txt.\n";
        }
    }

    file.close();
}

// Save Books to File
void Library::saveBooks() const {

    ofstream file(BOOK_FILE);

    if (!file.is_open()) {

        cout << "\nError: Unable to save books.\n";
        return;
    }

    for (const Book& book : books) {

        file << book.getId() << "|"
             << book.getTitle() << "|"
             << book.getAuthor() << "|"
             << (book.isAvailable() ? "Available" : "Issued")
             << "\n";
    }

    file.close();
}

// Save Members to File
void Library::saveMembers() const {

    ofstream file(MEMBER_FILE);

    if (!file.is_open()) {

        cout << "\nError: Unable to save members.\n";
        return;
    }

    for (const Member& member : members) {

        file << member.getId() << "|"
             << member.getName()
             << "\n";
    }

    file.close();
}