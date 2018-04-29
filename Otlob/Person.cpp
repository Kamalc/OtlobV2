#include "Person.h"
#include <sstream>
#include <string> 
#include <iostream>
using namespace System;
using namespace std;
Person::Person()
{
    firstName = secondName = phone = "";
}
Person::Person(String^ fName, String^ sName, String^ Phone)
{
    firstName = fName;
    secondName = sName;
    phone = Phone;
}
Person::Person(Person^ &obj)
{
    this->firstName = obj->firstName;
    this->secondName = obj->secondName;
    this->phone = obj->phone;
}
