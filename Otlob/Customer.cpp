#include "Customer.h"
#include "User.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace System;
using namespace std;
Customer::Customer()
{
}
Customer::Customer(String^ username_, String^ password_, String^ email_, String^ day_, String^ month_, String^ year_, String^ firstName_, String^ lastName_, String^ Phone) : User(username_, password_, email_, day_, month_, year_, firstName_, lastName_, Phone)
{
}
