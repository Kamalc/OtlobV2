#pragma once
#include "pairr.cpp"
#include"Delivery_Boy.h"
#include"SideDishes.h"
#include"Appetizers.h"
#include"Customer.h"
#include"Desserts.h"
#include"MainMeal.h"
#include"Drinks.h"
#include"Person.h"
#include <cliext\vector>
#include <cliext\map>
using namespace System;
using namespace System::Windows::Forms;
ref class Order
{
    Customer currentCustomer;
    /*cliext::vector<pairr<MainMeal,int>^ > mainMeal;
    cliext::vector<pairr<Desserts, int>^ > desserts;
    cliext::vector<pairr<Appetizers, int>^ > appetizers;
    cliext::vector<pairr<SideDishes, int>^ > sideDishes;
    cliext::vector<pairr<Drinks, int>^ > drinks;*/

    double  totalPrice;
    String^ paymentMethod;
public:
	Delivery_Boy^ deliveryBoy;
	int numberOfFood;
	cliext::vector<String^> List_OfFood;
	cliext::vector<double> List_Prices;
    Order();
};

