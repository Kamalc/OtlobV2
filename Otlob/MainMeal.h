#pragma once
#include "Food.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cliext\vector>
#include <cliext\map>
#include <cliext\deque>
using namespace System;
using namespace System::Windows::Forms;
ref class MainMeal : public Food
{
public:
    MainMeal();
    MainMeal(String^ n, String^ restraunt, String^ cat, double p, int q);
};

