#pragma once
#include<string>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace System;

ref class Convert_strings
{
public:
    std::string Convert_System_to_std(String ^ S);
	String^ Convert_std_to_System(std::string s);
};

