#pragma once
#include <cliext\vector>
#include <cliext\map>
#include <cliext\deque>
using namespace System;
using namespace System::Windows::Forms;
ref class Food 
{
protected:
    String^ name;
    String^ restrauntName;
    String^ Category;
    double price;
    int quantity;

public:
    //friend Restraunt;
    Food();
    Food(String^ name_, String^ restrauntName_, String^ category_, double price_, int quantity_);
   
    

};
