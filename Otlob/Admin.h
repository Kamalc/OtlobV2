#pragma once
#include "User.h"
#include <string>
using namespace System;
using namespace std;
ref class Admin : public User
{
public:
    Admin();
    Admin(String^ user, String^ pass, String^ mail, String^ birthdate, String^ fName, String^ sName, String^ Phone);

    void addEmployee() {};
    void removeEmployee() {};
};

