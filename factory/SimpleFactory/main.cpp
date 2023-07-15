#include "SimpleFactory.hpp"
#include <iostream>

int main()
{
    auto lionSmile = std::make_unique<SimpleFactory::LionSmile>();

    SimpleFactory::LionSmile::Transform();
    lionSmile->Ability();

    std::cout << "abc" << std::endl;

    return 0;
}