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
ref class Desserts : public Food
{

public:
    Desserts();
    Desserts(String^ name_, String^ restrauntName_, String^ category_, double price_, int quantity_);


};
