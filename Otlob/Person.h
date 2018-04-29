#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace System;
using namespace std;
ref class Person
{
protected:
    String^ firstName;
    String^ secondName;
    String^ phone;
public:
    Person();
    Person(String^ fName, String^ sName, String^ Phone);
    Person(Person^ &obj);
};