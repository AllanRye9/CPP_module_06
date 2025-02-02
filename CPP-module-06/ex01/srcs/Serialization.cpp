#include "../include/Serialization.hpp"

Serialization::Serialization(){}

Serialization::Serialization(const Serialization &other)
{
    *this = other;
}
        
Serialization &Serialization::operator=(const Serialization &other)
{
    if (this != &other)
    {
        // Copy the data from the other object to this object
    }
    return *this;
}
Serialization::~Serialization()
{
    std::cout << "Serialization Ended" << std::endl;
}

uintptr_t Serialization::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialization::deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}