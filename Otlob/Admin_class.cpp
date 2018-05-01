#include "Admin_class.h"
#include "User.h"

using namespace System;
//using namespace std;
Admin_class::Admin_class()
{
}
Admin_class::Admin_class(String^ username_, String^ password_, String^ email_, String^ day_, String^ month_, String^ year_, String^ firstName_, String^ lastName_, String^ Phone) : User(username_, password_, email_, day_, month_, year_, firstName_, lastName_, Phone)
{
}
void Admin_class::addEmployee(String^ firstName_, String^ lastName_, String^ Phone)
{
}
void Admin_class::removeEmployee(String^ firstName_, String^ lastName_, String^ Phone)
{
}
