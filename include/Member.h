#ifndef MEMBER_H
#define MEMBER_H

#include <string>
using namespace std;

class Member {
private:
    int id;
    string name;

public:
    Member();
    Member(int id, string name);

    int getId() const;
    string getName() const;

    void display() const;
};

#endif