#pragma once
#include "Person.h"
#include <string>
#include <cliext\vector>
using namespace System;
using namespace std;
ref class User : public Person
{
protected:
    String^ username;
    String^ password;
    String^ email;
    String^ birthDate;
	cliext::vector<String^> k;

public:
    User();
    User(String^ userName, String^ pass, String^ mail, String^ birthdate, String^ fName, String^ sName, String^ Phone);
    String ^ SignIn(String^ User_name_input,String^ PassWord_input);

};

