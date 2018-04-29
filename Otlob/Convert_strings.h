#pragma once
#include<string>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace System;

ref class Convert_strings
{
public:
    static  std::string Convert(String ^ S);
};

