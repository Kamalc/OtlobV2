#include "Restraunt.h"
#include <iostream>
#include<cliext\vector>
using namespace System;
using namespace std;
Restraunt::Restraunt()
{
    name = location = "";
    rate = 0.0;
    deliveryTime = 0;
}
Restraunt::Restraunt(String^ name_, String^ location_, int deliverytime_)
{
    name = name_;
    location = location_;
    deliveryTime = deliverytime_;
    cliext::vector<double> ::iterator it;
    for (int i = 0; i < rates.size(); i++)
    {
        rate += rates[i];
    }
    rate /= (int)(rates.size());
}
