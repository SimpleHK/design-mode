#include "SimpleFactory.hpp"
#include <iostream>

using namespace SimpleFactory;

AbstractSmile* SmileFactory::CreateSmile(SmileType type)
{
    AbstractSmile* ptr = nullptr;
    switch (type) {
        using enum SimpleFactory::SmileType; // using enum c++ 20 的新特性，用来引用枚举类型
        case SHEEP:
            ptr = new SheepSmile;
            break;
        case LION:
            ptr = new LionSmile;
            break;
        case BAT:
            ptr = new BatSmile;
            break;
        default:
            break;
    }

    return ptr;
}


void SheepSmile::Transform()
{
   std::cout << "变成人兽 -- 山羊人形态" << std::endl;
}

void SheepSmile::Ability()
{
    std::cout << "将手臂变成绵羊的招式 -- 巨羊角" << std::endl;
}

void LionSmile::Transform()
{
   std::cout << "变成人兽 -- 狮子人形态" << std::endl;
}

void LionSmile::Ability()
{
    std::cout << "火遁· 豪火球之术..." << std::endl;
}

void BatSmile::Transform()
{
   std::cout << "变成人兽 -- 蝙蝠人形态" << std::endl;
}

void BatSmile::Ability()
{
    std::cout << "声纳引箭之万剑归宗..." << std::endl;
}