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
    String^ lastName;
	String^ day;
	String^ month;
	String^ year;
public:
    Person();
    Person(String^ firstName_, String^ lastName_, String^ day_, String^ month_, String^ year_);
    Person(Person^ &obj);
	String^ getFirstName() {
		return firstName;
	}
	String^ getlastName() {
		return lastName;
	}
	String^ getday() {
		return day;
	}
	String^ getmonth() {
		return month;
	}
	String^ getyear() {
		return year;
	}
};