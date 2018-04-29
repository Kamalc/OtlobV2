#pragma once
#include "User.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cliext\vector>
#include <cliext\map>
#include <cliext\deque>
using namespace System;
using namespace System::Windows::Forms;
ref class Customer : public User
{
public:

    Customer();
    Customer(String^ username_, String^ password_, String^ email_, String^ birthdate_, String^ firstName_, String^ lastName_, String^ Phone);
    void SignUp();
    void SignIn();
};

