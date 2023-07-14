
#pragma once

namespace SimpleFactory
{
enum class SmileType : char {
    SHEEP,
    LION,
    BAT
};

class SmileFactory
{
public:
    void* CreateSmile(SmileType type);
};

class SheepSmile
{
public:
    static void Transform();
    void Ability();
};

class LionSmile
{
public:
    static void Transform();
    void Ability();
};

class BatSmile
{
public:
    void Transform();
    void Ability();
};
}

