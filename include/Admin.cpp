#include "Admin.h"

Admin::Admin(int id, std::string name, std::string email, std::string password) : User(id, name, email, password){
    this->id = id;
    this->name = name;
    this->email = email;
    this->password = password;
}

Admin::~Admin(){
    std::cout << "Admin Destructor called" << std::endl;
}
void Admin:: Login() {

}

void Admin::Logout() {

}

void Admin::AddBook() {
    // Implement book addition logic
}

void Admin::DeleteUser() {
    // Implement user deletion logic
}
