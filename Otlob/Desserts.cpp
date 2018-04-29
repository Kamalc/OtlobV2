#include "Desserts.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
using namespace System;
Desserts::Desserts()
{

}
Desserts::Desserts(String^ name_, String^ restrauntName_, String^ category_, double price_, int quantity_) : Food(name_, restrauntName_, category_, price_, quantity_)
{

}
