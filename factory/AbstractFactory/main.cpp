#include "NormalFactory.hpp"
#include <iostream>

int main()
{
    auto factory = std::make_unique<NormalFactory::LionFactory>();
    NormalFactory::AbstractSmile* lionSmile = factory->CreateSmile();

    lionSmile->Transform();
    lionSmile->Ability();

    std::cout << "abc" << std::endl;

    return 0;
}