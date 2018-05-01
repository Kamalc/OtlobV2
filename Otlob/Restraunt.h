#pragma once
#include "Global.h"
#include"Desserts.h"
#include"Appetizers.h"
#include"Drinks.h"
#include"SideDishes.h"
#include"MainMeal.h"
#include "Food.h"
#include"Delivery_Boy.h"
//#include "Convert_strings.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
ref class Restraunt
{
protected:
    String^ name;
	String^ Governate;
	String^ Address;
    double rate;
    int deliveryTime;
public:
	cliext::vector<Delivery_Boy^> deliveryBoys;
	cliext::vector<Appetizers^> appetizers;
	cliext::vector<SideDishes^> sidedishes;
	cliext::vector<MainMeal^> mainMeal;
	cliext::vector<Desserts^> desserts;
	cliext::vector<Drinks^> drinks;
    Restraunt();
    Restraunt(String^ name_, String^ Governate_, String^ Address_, int deliverytime_);
	cliext::vector<MainMeal^> fill_MainMeal(json,String^);
	cliext::vector<Appetizers^> fill_Appetizers(json, String^);
	cliext::vector<SideDishes^> fill_SideDishes(json, String^);
	cliext::vector<Desserts^> fill_Desserts(json, String^);
	cliext::vector<Drinks^> fill_Drinks(json, String^);
	cliext::vector<Delivery_Boy^> fill_Delivery(json);
	double setRate(json path);
	double setRate(double temp);
	String^ getName();
	double getRate();
};