#include "Convert_strings.h"
#include<string>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace System;

std::string Convert_strings::Convert_System_to_std(String ^ S)
{
    return std::string((marshal_as<std::string>(S)));
}
String^ Convert_strings::Convert_std_to_System(std::string s)
{
	return (gcnew String(s.c_str()));
}
