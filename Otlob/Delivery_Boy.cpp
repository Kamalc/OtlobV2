#include "Delivery_Boy.h"
#include "Person.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
using namespace System;
Delivery_Boy::Delivery_Boy()
{
    ID++;
	phone = "";
}
Delivery_Boy::Delivery_Boy(String^ firstName_, String^ lastName_, String^ phone_, String^ day_, String^ month_, String^ year_) : Person(firstName_, lastName_, day_, month_, year_)
{
    ID++;
	phone = phone_;
}
