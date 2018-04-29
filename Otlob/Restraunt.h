#pragma once
#include "Global.h"
#include"Desserts.h"
#include"Appetizers.h"
#include"Drinks.h"
#include"SideDishes.h"
#include"MainMeal.h"
#include"Delivery_Boy.h"
#include <cliext\vector>
using namespace System;
using namespace System::Windows::Forms;
	using namespace Globals;
ref class Restraunt
{
protected:
    String^ name;
    String^ location;
    cliext::vector<Delivery_Boy^> deliveryBoys;
    cliext::vector<Appetizers^> appetizers;
    cliext::vector<SideDishes^> sidedishes;
    cliext::vector<MainMeal^> mainMeal;
    cliext::vector<Desserts^> desserts;
    cliext::vector<Drinks^> drinks;
    cliext::vector<double> rates;
    double rate;
    int deliveryTime;
public:
    Restraunt();
    Restraunt(String^ name_, String^ locatoin_, int deliverytime_);
};