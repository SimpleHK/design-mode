#include "SimpleFactory.hpp"
#include <iostream>

int main()
{

    auto factory = std::make_unique<SimpleFactory::SmileFactory>();
    SimpleFactory::AbstractSmile* lionSmile = factory->CreateSmile(SimpleFactory::SmileType::LION);

    lionSmile->Transform();
    lionSmile->Ability();

    std::cout << "abc" << std::endl;

    return 0;
}