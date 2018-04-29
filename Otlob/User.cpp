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
    username = password = email = birthDate = "";
}
User::User(String^ userName, String^ pass, String^ mail, String^ birthdate, String^ fName, String^ sName, String^ Phone) : Person(fName, sName, Phone)
{
    username = userName;
    password = pass;
    email = mail;
    birthDate = birthdate;
	k = gcnew cliext::vector<String^>();
}
String ^ User::SignIn(String^ User_name_input, String^ PassWord_input)
{

    ifstream i("Users.json");
    json j;
    i >> j;
    string UserName = Convert_strings::Convert(User_name_input);
    string PassWord = Convert_strings::Convert(PassWord_input);
    if (j.find(UserName) != j.end())
    {
        if (j[UserName]["Password"] == PassWord)
        {
            GlobalClass::LogIn = true;
            GlobalClass::username = User_name_input;
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