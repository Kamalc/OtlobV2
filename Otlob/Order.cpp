#include "Order.h"
#include "Delivery_Boy.h"
Order::Order()
{
    totalPrice = 0;
    deliveryBoy = gcnew  Delivery_Boy("", "", "","","", "");
    feedBack = "";
    paymentMethod = "";
}
