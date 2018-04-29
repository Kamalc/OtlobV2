#include "Appetizers.h"
#include "Food.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace System;
using namespace std;
Appetizers::Appetizers()
{
}
Appetizers::Appetizers(String^ name_, String^ restrauntName_, String^ category_, double price_, int quantity_) : Food(name_, restrauntName_, category_, price_, quantity_)
{}
