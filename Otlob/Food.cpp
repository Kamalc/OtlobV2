#include "Food.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace System;
using namespace std;
Food::Food()
{
    name = restrauntName = Category = "";
    price = 0.0;
    quantity = 0;
}
Food::Food(String^ name_, String^ restrauntName_, String^ category_, double price_, int quantity_)
{
    this->name = name_;
    this->restrauntName = restrauntName_;
    this->Category = category_;
    this->price = price_;
    this->quantity = quantity_;
}