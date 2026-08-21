#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>

#include "Book.h"
#include "Member.h"

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<Member> members;

    const string BOOK_FILE = "data/books.txt";
    const string MEMBER_FILE = "data/member.txt";

public:
    Library();

    void addBook();
    void addMember();

    void displayBooks() const;
    void displayMembers() const;

    void issueBook();
    void returnBook();

    void searchBook() const;

    void loadBooks();
    void loadMembers();

    void saveBooks() const;
    void saveMembers() const;
};

#endif