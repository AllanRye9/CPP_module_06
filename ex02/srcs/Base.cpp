#include "../include/Base.hpp"

Base::~Base(){}

Base *generate(void)
{
    std::srand(std::time(0));
    int random = std::rand() % 3;
    if (random == 0)
        return new A;
    else if (random == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Identity of A Class" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Identity of B Class" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Identity of C Class" << std::endl;
    else
        std::cout << "Identity of Unknown" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Identity of A Class" << std::endl;
    }
    catch (const std::exception & e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "Identity of B Class" << std::endl;
        }
        catch (const std::exception & e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "Identity of C Class" << std::endl;
            }
            catch (const std::exception & e)
            {
                std::cout << "Identity of Unknown" << std::endl;
            }
        }
    }
}