#pragma once
//#include "Restraunt.h"
#include "Person.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cliext\vector>
#include <cliext\map>
#include <cliext\deque>
using namespace System;
using namespace System::Windows::Forms;
ref class Delivery_Boy : public Person
{
protected:
	String^ phone;
public:
	static int ID = 0;
	Delivery_Boy();
	Delivery_Boy(String^ firstName_, String^ lastName_, String^ phone_, String^ day_, String^ month_, String^ year_);
	String^ getPhone() {
		return phone;
	}
};
