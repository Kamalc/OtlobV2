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
}
Delivery_Boy::Delivery_Boy(String^ firstName_, String^ lastName_, String^ Phone) : Person(firstName_, lastName_, Phone)
{
    ID++;
}
