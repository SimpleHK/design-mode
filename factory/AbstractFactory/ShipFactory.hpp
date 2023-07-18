//
// Created by jixu on 2023/7/17.
//

#pragma once
#include <iostream>
#include <string>

namespace ShipFactory {
class ShipFactory
{

};

class ShipBody
{
public:
    virtual std::string GetShipBody() = 0;
    virtual ~ShipBody() = default;
};

class WoodBody : public ShipBody
{
public:
    std::string GetShipBody() override;
};

class IronBody : public ShipBody
{
public:
    std::string GetShipBody() override;
};

class MetaBody : public ShipBody
{
public:
    std::string GetShipBody() override;
};

class Engine
{
public:
    virtual std::string GetEngine() = 0;
    virtual ~Engine() = default;
};

class Human : public Engine
{
public:
    std::string GetEngine() override;
};

class Diesel : public Engine
{
public:
    std::string GetEngine() override;
};

class Nuclear : public Engine
{
public:
    std::string GetEngine() override;
};

class Weapon
{
public:
    virtual std::string GetWeapon() = 0;
    virtual ~Weapon() = default;
};

class Gun : public Weapon
{
public:
    std::string GetWeapon() override;
};

class Cannon : public Weapon
{
public:
    std::string GetWeapon() override;
};

class Laser : public Weapon
{
public:
    std::string GetWeapon() override;
};

class Ship
{
public:
    Ship(ShipBody* body, Weapon* weapon, Engine* engine);
    std::string GetProperty();
    ~Ship();

private:
    ShipBody* mBody = nullptr;
    Weapon* mWeapon = nullptr;
    Engine* mEngine = nullptr;
};

class AbstractFactory
{
public:
    virtual Ship* CreateShip() = 0;
    virtual  ~AbstractFactory() = default;
};

class BasicFactory : public AbstractFactory
{
public:
    Ship* CreateShip() override;
};

class StandardFactory : public AbstractFactory
{
public:
    Ship* CreateShip() override;
};

class UltimateFactory : public AbstractFactory
{
public:
    Ship* CreateShip() override;
};

} // ShipFactory