#include "Admin.h"
#include "User.h"
using namespace System;
using namespace std;
Admin::Admin()
{
}
Admin::Admin(String^ user, String^ pass, String^ mail, String^ birthdate, String^ fName, String^ sName, String^ Phone) : User(user, pass, mail, birthdate, fName, sName, Phone)
{

}
