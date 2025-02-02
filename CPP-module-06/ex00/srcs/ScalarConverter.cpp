#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){
    std::cout << "End of Execution" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &object)
{
    if (this != &object)
        return *this;
    return *this;
}

ScalarConverter::ScalarConverter(ScalarConverter &object)
{
    *this = object;
}

void ScalarConverter::convert(const std::string input)
{
    int i = 0;
    while (input[i] == ' ' || input[i] == '\t')
        i++;
    if (input[i] == '-' || input[0] == '+')
        i++;
    
    std::cout << "char: ";
    try{
        int w;
        if (input.length() == 1 && !isdigit(input[0]))
            w = static_cast<int>(input[0]);
        else if (!isdigit(input[i]))
            throw std::exception();
        else
            w = static_cast<int>(std::atoi(input.c_str()));
        char c = static_cast<char>(w);
        if (w < 32 || w > 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << "'" << c << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << " Impossible " << std::endl;
    }

    std::cout << "int:  ";
    try{
        int k;
        if (input.length() == 1 && !isdigit(input[0]))
            k = static_cast<int>(input[0]);
        else if (!isdigit(input[i]) || input.length() > 10)
            throw std::exception();
        else
            k = static_cast<int>(std::atoi(input.c_str()));
        std::cout << k << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << " Impossible " << std::endl;
    }

    std::cout << "float:    ";
    try
    {
        float f;
        if (input.length() == 0)
            throw std::exception();
        else if (input.length() == 1 && !isdigit(input[0]))
            f = static_cast<float>(input[0]);
        else
        {
            if (input[input.length() - 1] == 'f' && input[i] != 'i')
                std::istringstream(input.substr(0, input.length() - 1)) >> f;
            else
                std::istringstream(input) >> f;
            if (f == 0.0 && input.length() != 0)
                throw std::exception();
        }
        std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Impossible" << std::endl;
    }
    
    std::cout << "double:   ";
    try
    {
        double d;
        if (input.length() == 1 && !isdigit(input[0]))
            d = static_cast<double>(input[0]);
        else
            d = static_cast<double>(std::atof(input.c_str()));
        if (d == 0.0 && input.length() != 0)
            throw std::exception();
    std::cout << std::fixed << std::setprecision(2) << d << std::endl;
    }
    catch(const std::exception & e)
    {
        std::cerr << "Impossible" << std::endl;
    }
}