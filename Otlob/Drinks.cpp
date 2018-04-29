#include "Drinks.h"



Drinks::Drinks()
{
}
Drinks::Drinks(String^ name_, String^ restrauntName_, String^ category_, double price_, int quantity_) : Food(name_, restrauntName_, category_, price_, quantity_)
{}