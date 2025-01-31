#pragma once

#include <iostream>
#include <cstdlib>
#include <exception>
#include <iomanip>
#include <sstream>

class ScalarConverter
{
public:
ScalarConverter();
~ScalarConverter();
ScalarConverter& operator=(ScalarConverter const &object);
ScalarConverter(ScalarConverter &object);
static void convert(const std::string input);
};