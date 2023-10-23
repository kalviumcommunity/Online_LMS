#include "Member.h"

int Member::member_count = 0;

Member::Member(int id, std::string name, std::string email, std::string password)
    : User(id, name, email, password) {
    this->id = id;
    this->name = name;
    this->email = email;
    this->password = password;
    member_count++;
}

Member::~Member() {
    std::cout << "Member Destructor called" << std::endl;
    member_count--;
}

void Member::Login() {
   
}

void Member::Logout() {

}

void Member::Register() {
   
}

void Member::getMemberCount() {
    std::cout << "Total number of Members: " << member_count << std::endl;
}

