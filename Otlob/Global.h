#pragma once
#include "Convert_strings.h"
#include<cliext\vector>
#include "Order.h"
namespace Globals
{
	using namespace System;
	using namespace System::Windows::Forms;
	public ref class GlobalClass
	{
	public: static bool LogIn;
	public: static String^ username;
	public: static String^ governate;
	public: static String^ address;
	public: static Form^ home;
	public: static Form^ signin;
	public: static Form^ signup;
	public: static Form^ profile;
	public: static Form^ showRestaurant;
	public: static Form^ order;
	public: static Form^ AdminFormLogIn;
	public: static Form^ AdminForm;
	public: static Form^ Bill;
	public: static Form^ AllOffers;
	public: static Form^ AllRestaurants;
	public: static Form^ MyBills;
	public: static Form^ FoodsName;
	public: static Form^ FeedBack;
	public: static Order^ makeOrder = gcnew Order;
	public: static int index;
	};

}

