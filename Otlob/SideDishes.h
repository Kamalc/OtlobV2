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
ref class SideDishes : public Food
{

public:
    SideDishes();
    SideDishes(String^ name_, String^ restrauntName_, String^ category_, double price_, int quantity_);
};

