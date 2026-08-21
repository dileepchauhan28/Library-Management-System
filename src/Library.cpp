#include "../include/Library.h"
#include <iostream>
#include <string>

using namespace std;

void Library::addBook() {
    int id;
    string title, author;

    cout << "\nEnter Book ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, title);

    cout << "Enter Author Name: ";
    getline(cin, author);

    books.push_back(Book(id, title, author));

    cout << "\nBook added successfully!\n";
}

void Library::addMember() {
    int id;
    string name;

    cout << "\nEnter Member ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Member Name: ";
    getline(cin, name);

    members.push_back(Member(id, name));

    cout << "\nMember added successfully!\n";
}

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

void Library::issueBook() {
    int bookId;

    cout << "\nEnter Book ID to issue: ";
    cin >> bookId;

    for (Book& book : books) {

        if (book.getId() == bookId) {

            if (book.isAvailable()) {
                book.issueBook();

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

void Library::returnBook() {
    int bookId;

    cout << "\nEnter Book ID to return: ";
    cin >> bookId;

    for (Book& book : books) {

        if (book.getId() == bookId) {

            if (!book.isAvailable()) {
                book.returnBook();

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

void Library::searchBook() const {
    int choice;
    string keyword;

    cout << "\nSearch Book By:\n";
    cout << "1. Title\n";
    cout << "2. Author\n";
    cout << "Enter choice: ";

    cin >> choice;
    cin.ignore();

    cout << "Enter search keyword: ";
    getline(cin, keyword);

    bool found = false;

    for (const Book& book : books) {

        if (choice == 1 && book.getTitle().find(keyword) != string::npos) {
            book.display();
            found = true;
        }
        else if (choice == 2 && book.getAuthor().find(keyword) != string::npos) {
            book.display();
            found = true;
        }
    }

    if (!found) {
        cout << "\nNo matching books found.\n";
    }
}