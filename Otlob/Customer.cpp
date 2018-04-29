#include "Customer.h"
#include "Person.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace System;
using namespace std;
Customer::Customer()
{
}
Customer::Customer(String^ username_, String^ password_, String^ email_, String^ birthdate_, String^ firstName_, String^ lastName_, String^ Phone) : User(username_, password_, email_, birthdate_, firstName_, lastName_, Phone)
{
}
void Customer::SignIn()
{
}
void Customer::SignUp()
{
}
