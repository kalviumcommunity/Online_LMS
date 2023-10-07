#include "Member.h"

Member::Member(int id, std::string name, std::string email, std::string password)
    : User(id, name, email, password) {
    this->id = id;
    this->name = name;
    this->email = email;
    this->password = password;
}

void Member::Login() {
   
}

void Member::Logout() {

}

void Member::Register() {
   
}

