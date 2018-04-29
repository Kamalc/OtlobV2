#include "Customer_Opinion.h"

using namespace std;
using namespace System;


Customer_Opinion::Customer_Opinion()
{
    isGood = true;
    Reason = "";
}
Customer_Opinion::Customer_Opinion(Boolean^ isGood_, String^ reason_)
{
    isGood = isGood_;
    Reason = reason_;
}
