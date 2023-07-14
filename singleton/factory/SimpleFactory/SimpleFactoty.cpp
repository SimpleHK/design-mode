#include "SimpleFactory.hpp"
#include <iostream>

using namespace SimpleFactory;

void* SmileFactory::CreateSmile(SmileType type)
{
    void* ptr = nullptr;
    switch (type) {
        case SmileType::SHEEP:
            ptr = new SheepSmile;
            break;
        case SmileType::LION:
            ptr = new LionSmile;
            break;
        case SmileType::BAT:
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