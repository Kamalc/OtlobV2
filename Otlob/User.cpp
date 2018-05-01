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
    Username = password = email = phone = "";
}
void User::SignIn_Data(String^ username_, String^ password_)
{
	Username = username_;
	password = password_;
	email = phone = "";
}
User::User(String^ username_, String^ password_, String^ email_, String^ day_, String^ month_, String^ year_, String^ firstName_, String^ lastName_, String^ phone_) : Person(firstName_, lastName_, day_, month_, year_)
{
	Username = username_;
    password = password_;
    email = email_;
    phone = phone_;
}
void User::SignUp(std::string DataBase_Name)
{
	Convert_strings tmp;
	string FirstName = tmp.Convert_System_to_std(firstName);
	string LastName = tmp.Convert_System_to_std(lastName);
	string username = tmp.Convert_System_to_std(Username);
	string Email = tmp.Convert_System_to_std(email);
	string Password = tmp.Convert_System_to_std(password);
	string Phone = tmp.Convert_System_to_std(phone);
	string Day = tmp.Convert_System_to_std(day);
	string Month = tmp.Convert_System_to_std(month);
	string Year = tmp.Convert_System_to_std(year);
	ifstream i(DataBase_Name);
	json j;
	i >> j;
	j[username]["Name"]["First"] = FirstName;
	j[username]["Name"]["Last"] = LastName;
	j[username]["Email"] = Email;
	j[username]["Password"] = Password;
	j[username]["Date Birth"]["Day"] = Day;
	j[username]["Date Birth"]["Month"] = Month;
	j[username]["Date Birth"]["Year"] = Year;
	j[username]["Phone"] = Phone;

	ofstream o(DataBase_Name);
	o << setw(4) << j << endl;
	Globals::GlobalClass::username = Username;
	Globals::GlobalClass::LogIn = true;
	Globals::GlobalClass::home->Show();
	Globals::GlobalClass::signup->Hide();
	//button_SubmitSU->Enabled = (!(j.find(tmp.Convert_System_to_std(Username)) != j.end()));

}
String^ User::SignIn(std::string DataBase_Name)
{

    ifstream i(DataBase_Name);
    json j;
    i >> j;
	Convert_strings tmp;
    string UserName = tmp.Convert_System_to_std(Username);
    string PassWord = tmp.Convert_System_to_std(password);
    if (j.find(UserName) != j.end())
    {
        if (j[UserName]["Password"] == PassWord)
        {
            GlobalClass::LogIn = true;
            GlobalClass::username = Username;  
                return("LogIn");
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