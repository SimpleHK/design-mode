
#pragma once

namespace NormalFactory
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

class AbstractFactory
{
public:
    virtual AbstractSmile* CreateSmile() = 0;
    virtual ~AbstractFactory() = default;
};

class SheepFactory : public AbstractFactory
{
public:
    AbstractSmile * CreateSmile() override;
    ~SheepFactory() override;
};

class LionFactory : public AbstractFactory
{
public:
    AbstractSmile* CreateSmile() override;
    ~LionFactory() override;
};

class BatFactory : public AbstractFactory
{
public:
    AbstractSmile* CreateSmile() override;
    ~BatFactory() override;
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
} // namespace NormalFactory

