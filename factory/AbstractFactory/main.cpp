#include "ShipFactory.hpp"
#include <iostream>
#include <memory>

int main() {
    ShipFactory::AbstractFactory* factory = new ShipFactory::StandardFactory;
    ShipFactory::Ship *ship = factory->CreateShip();
    std::cout << ship->GetProperty();

    delete ship;
    delete factory;
    return 0;
}