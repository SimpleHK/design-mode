//
// Created by jixu on 2023/7/17.
//

#include "ShipFactory.hpp"
#include <iostream>

namespace ShipFactory {
    std::string WoodBody::GetShipBody() {
        return {"用<木材>制作轮船船体..."};
    }

    std::string IronBody::GetShipBody() {
        return {"用<钢铁>制作轮船船体..."};
    }

    std::string MetaBody::GetShipBody() {
        return {"用<合金>制作轮船船体..."};
    }

    std::string Human::GetEngine() {
        return {"用<人力>驱动..."};
    }

    std::string Diesel::GetEngine() {
        return {"用<内燃机>驱动..."}; // {}初始化列表，返回 std::string` 对象
    }

    std::string Nuclear::GetEngine() {
        return "用<核能>驱动..."; // ? 返回 char * 还是会转换为 string ?
    }

    std::string Gun::GetWeapon() {
        return {"配备的武器是<枪>..."};
    }

    std::string Cannon::GetWeapon() {
        return {"配备的武器是<自动机关炮>..."};
    }

    std::string Laser::GetWeapon() {
        return {"配备的武器是<激光>..."};
    }

    Ship::Ship(ShipBody *body, Weapon *weapon, Engine *engine) :
                mBody(body), mWeapon(weapon), mEngine(engine)
    {

    }

    Ship::~Ship()
    {
        delete mBody;
        delete mWeapon;
        delete mEngine;
    }

    std::string Ship::GetProperty() {
        return {
            mBody->GetShipBody() +
            mWeapon->GetWeapon() +
            mEngine->GetEngine()
        };
    }

    Ship *BasicFactory::CreateShip() {
        Ship* ship = new Ship(new WoodBody, new Gun, new Human);
        std::cout << "<基础型>战船生产完毕，可以下水啦。。。" << std::endl;
        return ship;
    }

    Ship *StandardFactory::CreateShip() {
        Ship* ship = new Ship(new IronBody, new Cannon, new Diesel);
        std::cout << "<标准型>战船生产完毕，可以下水啦。。。" << std::endl;
        return ship;
    }

    Ship *UltimateFactory::CreateShip() {
        Ship* ship = new Ship(new MetaBody, new Laser, new Nuclear);
        std::cout << "<旗舰型>战船生产完毕，可以下水啦。。。" << std::endl;
        return ship;
    }
} // ShipFactory