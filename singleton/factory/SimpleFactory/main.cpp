#include "SimpleFactory.hpp"
#include <iostream>
#include <ostream>
#include <memory>

int main()
{
    auto lionSmile = std::make_unique<SimpleFactory::LionSmile>();

    lionSmile->Transform();
    lionSmile->Ability();

    std::cout << "abc" << std::endl;

    return 0;
}