#include "MainMeal.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
using namespace System;
MainMeal::MainMeal()
{}
MainMeal::MainMeal(String^ n, String^ restraunt, String^ cat, double p, int q) : Food(n, restraunt, cat, p, q)
{


}
