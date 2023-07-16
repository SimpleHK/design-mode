
#pragma once

namespace SimpleFactory
{
enum class SmileType : char {
    SHEEP,
    LION,
    BAT
};

class AbstractSmile
{
public:
    virtual void Transform() = 0;
    virtual void Ability() = 0;
    virtual ~AbstractSmile() = default;
};

class SmileFactory
{
public:
    AbstractSmile* CreateSmile(SmileType type);
};

class SheepSmile : public AbstractSmile
{
public:
    void Transform() override;
    void Ability() override;
};

class LionSmile : public AbstractSmile
{
public:
   void Transform() override;
    void Ability() override;
};

class BatSmile : public AbstractSmile
{
public:
    void Transform() override;
    void Ability() override;
};
}

