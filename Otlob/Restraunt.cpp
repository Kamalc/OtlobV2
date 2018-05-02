#include "Restraunt.h"
#include <iostream>
#include<cliext\vector>
using namespace System;
using namespace std;
Restraunt::Restraunt()
{
    name = Governate = Address ="";
    rate = 0.0;
    deliveryTime = 0;
}
Restraunt::Restraunt(String^ name_, String^ Governate_, String^ Address_, int deliverytime_)
{
    name = name_;
	Governate = Governate_;
	Address = Address_;
    deliveryTime = deliverytime_;
}
cliext::vector<MainMeal^> Restraunt::fill_MainMeal(json food, String^ restrauntName)
{
	Convert_strings temp;
	cliext::vector<MainMeal^> temp_List;
	for (json::iterator it = food.begin(); it != food.end(); it++)
	{
		String^ name = temp.Convert_std_to_System(it.key());
		String^ restraunt = restrauntName;
		String^ category = temp.Convert_std_to_System(food[it.key()]["Category"]);
		double price = food[it.key()]["Price"];
		int quantity = food[it.key()]["Quantity"];
		MainMeal^ tmp = gcnew MainMeal(name, restraunt, category, price, quantity);
		temp_List.push_back(tmp);
	}
	return temp_List;
}
cliext::vector<Appetizers^> Restraunt::fill_Appetizers(json food, String^ restrauntName)
{
	Convert_strings temp;
	cliext::vector<Appetizers^> temp_List;
	for (json::iterator it = food.begin(); it != food.end(); it++)
	{
		String^ name = temp.Convert_std_to_System(it.key());
		String^ restraunt = restrauntName;
		double price = food[it.key()]["Price"];
		int quantity = food[it.key()]["Quantity"];
		Appetizers^ tmp = gcnew Appetizers(name, restraunt, "", price, quantity);
		temp_List.push_back(tmp);
	}
	return temp_List;
}
cliext::vector<SideDishes^> Restraunt::fill_SideDishes(json food, String^ restrauntName)
{
	Convert_strings temp;
	cliext::vector<SideDishes^> temp_List;
	for (json::iterator it = food.begin(); it != food.end(); it++)
	{
		String^ name = temp.Convert_std_to_System(it.key());
		String^ restraunt = restrauntName;
		double price = food[it.key()]["Price"];
		int quantity = food[it.key()]["Quantity"];
		SideDishes^ tmp = gcnew SideDishes(name, restraunt, "", price, quantity);
		temp_List.push_back(tmp);
	}
	return temp_List;
}
cliext::vector<Desserts^> Restraunt::fill_Desserts(json food, String^ restrauntName)
{
	Convert_strings temp;
	cliext::vector<Desserts^> temp_List;
	for (json::iterator it = food.begin(); it != food.end(); it++)
	{
		String^ name = temp.Convert_std_to_System(it.key());
		String^ restraunt = restrauntName;
		double price = food[it.key()]["Price"];
		int quantity = food[it.key()]["Quantity"];
		Desserts^ tmp = gcnew Desserts(name, restraunt, "", price, quantity);
		temp_List.push_back(tmp);
	}
	return temp_List;
}
cliext::vector<Drinks^> Restraunt::fill_Drinks(json food, String^ restrauntName)
{
	Convert_strings temp;
	cliext::vector<Drinks^> temp_List;
	for (json::iterator it = food.begin(); it != food.end(); it++)
	{
		String^ name = temp.Convert_std_to_System(it.key());
		String^ restraunt = restrauntName;
		double price = food[it.key()]["Price"];
		int quantity = food[it.key()]["Quantity"];
		Drinks^ tmp = gcnew Drinks(name, restraunt, "", price, quantity);
		temp_List.push_back(tmp);
	}
	return temp_List;
}
cliext::vector<Delivery_Boy^> Restraunt::fill_Delivery(json path)
{
	cliext::vector<Delivery_Boy^> ret;
	Convert_strings temp;
	for (json::iterator idx = path.begin(); idx != path.end(); idx++)
	{
		
		String^ firstName = temp.Convert_std_to_System(path[idx.key()]["Name"]["First"]);
		String^ lastName = temp.Convert_std_to_System(path[idx.key()]["Name"]["Last"]);
		String^ Phone = temp.Convert_std_to_System(path[idx.key()]["Phone"]);
		Delivery_Boy^ tmp = gcnew Delivery_Boy(firstName, lastName, Phone, "", "", "");
		ret.push_back(tmp);
	}
	return ret;
}
double Restraunt::setRate(json path)
{
	Convert_strings temp;
	double ret = 0;
	double cntElements = 0;
	for (json::iterator idx = path.begin(); idx != path.end(); idx++)
	{
		ret += idx.value();
		cntElements++;
	}
    MessageBox::Show(Convert::ToString(ret/ cntElements));
	return rate=(cntElements == 0 ? 0.0 : ret/cntElements);
}
double Restraunt::getRate()
{
	return rate;
}
double Restraunt::setRate(double temp)
{
	return rate = temp;
}
String^ Restraunt::getName()
{
	return name;
}