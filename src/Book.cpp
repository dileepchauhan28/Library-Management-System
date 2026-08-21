#include "../include/Book.h"
#include <iostream>

using namespace std;

Book::Book() {
    id = 0;
    title = "";
    author = "";
    available = true;
}

Book::Book(int id, string title, string author, bool available) {
    this->id = id;
    this->title = title;
    this->author = author;
    this->available = available;
}

int Book::getId() const {
    return id;
}

string Book::getTitle() const {
    return title;
}

string Book::getAuthor() const {
    return author;
}

bool Book::isAvailable() const {
    return available;
}

void Book::issueBook() {
    available = false;
}

void Book::returnBook() {
    available = true;
}

void Book::display() const {
    cout << "ID: " << id
         << " | Title: " << title
         << " | Author: " << author
         << " | Status: "
         << (available ? "Available" : "Issued")
         << endl;
}