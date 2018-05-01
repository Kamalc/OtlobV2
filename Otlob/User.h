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
	String^ phone;

public:
    User();
    User(String^ username_, String^ password_, String^ email_, String^ day_, String^ month_, String^ year_, String^ firstName_, String^ lastName_, String^ phone_);
	void SignIn_Data(String^ username_, String^ password_);
	void SignUp(std::string DataBase_Name);
	String^ SignIn(std::string DataBase_Name);
};

