#include <iostream>
#include "../include/Library.h"

using namespace std;

int main() {

    Library library;

    int choice;

    do {

        cout << "\n====================================\n";
        cout << "       LIBRARY MANAGEMENT SYSTEM\n";
        cout << "====================================\n";

        cout << "1. Add Book\n";
        cout << "2. Add Member\n";
        cout << "3. Display Books\n";
        cout << "4. Display Members\n";
        cout << "5. Issue Book\n";
        cout << "6. Return Book\n";
        cout << "7. Search Book\n";
        cout << "8. Exit\n";

        cout << "------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            library.addBook();
            break;

        case 2:
            library.addMember();
            break;

        case 3:
            library.displayBooks();
            break;

        case 4:
            library.displayMembers();
            break;

        case 5:
            library.issueBook();
            break;

        case 6:
            library.returnBook();
            break;

        case 7:
            library.searchBook();
            break;

        case 8:
            cout << "\nThank you for using Library Management System!\n";
            break;

        default:
            cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 8);

    return 0;
}