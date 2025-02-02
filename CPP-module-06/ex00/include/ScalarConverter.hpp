#pragma once

#include <iostream>
#include <cstdlib>
#include <exception>
#include <iomanip>
#include <string>
#include <sstream>

class ScalarConverter
{
private:
    ScalarConverter();  
    ~ScalarConverter();
    ScalarConverter(ScalarConverter &object);
    ScalarConverter& operator=(ScalarConverter const &object);
public:
    static void convert(const std::string input);
};