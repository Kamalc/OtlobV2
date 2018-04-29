#include "Convert_strings.h"
#include<string>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace System;

std::string Convert_strings::Convert(String ^ S)
{
    return std::string((marshal_as<std::string>(S)));
}
