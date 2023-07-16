#include "NormalFactory.hpp"
#include <iostream>

using namespace NormalFactory;

AbstractSmile* SheepFactory::CreateSmile() {
    return new SheepSmile;
}

SheepFactory::~SheepFactory() {
    std::cout << "释放 SheepFactory 类相关的内存资源" << std::endl;
}

AbstractSmile* LionFactory::CreateSmile() {
    return new LionSmile;
}

LionFactory::~LionFactory() {
    std::cout << "释放 LionFactory 类相关的内存资源" << std::endl;
}

AbstractSmile* BatFactory::CreateSmile() {
    return new BatSmile;
}

BatFactory::~BatFactory() {
    std::cout << "释放 BatFactory 类相关的内存资源" << std::endl;
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
