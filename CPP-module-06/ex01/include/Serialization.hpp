#pragma once

#include <iostream>
#include <stdint.h>

struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

class Serialization
{   
    public:
        Serialization();
        Serialization(const Serialization &other);
        Serialization &operator=(const Serialization &other);
        ~Serialization();
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};