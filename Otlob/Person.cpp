#include "Person.h"
#include <sstream>
#include <string> 
#include <iostream>
using namespace System;
using namespace std;
Person::Person()
{
    firstName = lastName = day = month = year = "";
}
Person::Person(String^ firstName_, String^ lastName_, String^ day_, String^ month_, String^ year_)
{
    firstName = firstName_;
    lastName = lastName_;
	day = day_;
	month = month_;
	year = year_;
}
Person::Person(Person^ &obj)
{
    this->firstName = obj->firstName;
    this->lastName = obj->lastName;
	this->day = obj->day;
	this->month = obj->month;
	this->year = obj->year;
}
