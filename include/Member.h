#ifndef MEMBER_H
#define MEMBER_H

#include "User.h"
#include <iostream>

class Member : public User {
private:
    static int member_count;
public:
    Member(int id, std::string name, std::string email, std::string password);
    ~Member();
    void Login() override; // Override the virtual functions
    void Logout() override; 
    void Register(); 
    static void getMemberCount();
};

#endif

