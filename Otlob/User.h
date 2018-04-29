#pragma once
#include "Person.h"
#include <string>
#include <cliext\vector>
using namespace System;
using namespace std;
ref class User : public Person
{
protected:
    String^ Username;
    String^ password;
    String^ email;
    String^ birthDate;

public:
    User();
    User(String^ username_, String^ password_, String^ email_, String^ birthdate_, String^ firstName_, String^ lastName_, String^ phone_);
	void SignIn_Data(String^ username_, String^ password_);
	String^ SignIn(std::string DataBase_Name);
};

