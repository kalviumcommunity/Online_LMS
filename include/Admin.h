#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include "User.h"

class Admin : public User {
public:
    Admin(int id, std::string name, std::string email, std::string password);
    ~Admin();
    void Login() override;
    void Logout() override;
    void AddBook();
    void DeleteUser() ;
};

#endif
