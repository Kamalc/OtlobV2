#include <fstream>      
#include "json.hpp"
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include "Person.h"
#include <string> 
#include "Global.h"
#include <cliext\vector>
#include"Convert_strings.h"
using namespace System;
using json = nlohmann::json; 
using namespace msclr::interop;
using namespace std;
using namespace Globals;
using namespace System::Windows::Forms;

User::User()
{
    Username = password = email = birthDate = "";
}
void User::SignIn_Data(String^ username_, String^ password_)
{
	Username = username_;
	password = password_;
	email = birthDate = "";
}
User::User(String^ username_, String^ password_, String^ email_, String^ birthdate_, String^ firstName_, String^ lastName_, String^ phone_) : Person(firstName_, lastName_, phone_)
{
	Username = username_;
    password = password_;
    email = email_;
    birthDate = birthdate_;
}
String^ User::SignIn(std::string DataBase_Name)
{

    ifstream i(DataBase_Name);
    json j;
    i >> j;
    string UserName = Convert_strings::Convert_System_to_std(Username);
    string PassWord = Convert_strings::Convert_System_to_std(password);
    if (j.find(UserName) != j.end())
    {
        if (j[UserName]["Password"] == PassWord)
        {
            GlobalClass::LogIn = true;
            GlobalClass::username = Username;
            if (GlobalClass::LogIn == true) 
            {   
                return("LogIn");
            }
        }
        else
        {
            return ("Invalid password");
        }
    }
    else
    {
        return ("Invalid User Name");
    }
	return("");
};