#pragma once
using namespace System;
using namespace System::Windows::Forms;
ref class Customer_Opinion
{

    Boolean^ isGood;
    String^ Reason;
public:
    Customer_Opinion();
    Customer_Opinion(Boolean^ isGood_, String^ reason_);
};

