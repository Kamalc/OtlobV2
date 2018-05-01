#pragma once
#include "Food.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cliext\vector>
#include <cliext\map>
#include <cliext\deque>
#include "json.hpp"
using json = nlohmann::json;
using namespace System;
using namespace System::Windows::Forms;
ref class MainMeal : public Food
{
public:
    MainMeal();
	MainMeal(String^ n, String^ restraunt, String^ cat, double p, int q) : Food(n, restraunt, cat, p, q) {
		name = n;
		restrauntName = restraunt;
		Category = cat;
		price = p;
		quantity = q;
	};
};

