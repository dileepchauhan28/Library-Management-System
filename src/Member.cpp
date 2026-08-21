#include "../include/Member.h"
#include <iostream>

using namespace std;

Member::Member() {
    id = 0;
    name = "";
}

Member::Member(int id, string name) {
    this->id = id;
    this->name = name;
}

int Member::getId() const {
    return id;
}

string Member::getName() const {
    return name;
}

void Member::display() const {
    cout << "ID: " << id
         << " | Name: " << name
         << endl;
}