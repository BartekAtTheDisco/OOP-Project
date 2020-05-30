#ifndef Cryptocurrency_hpp
#define Cryptocurrency_hpp


#include <iostream>
using namespace std;

class Cryptocurrency{
public:
    virtual void assign_current_value(float) = 0;
    virtual float get_current_value() = 0;
};

class Bitcoin : public Cryptocurrency{
    float current_value;
public:
    Bitcoin();
    virtual void assign_current_value(float);
    virtual float get_current_value();
    
};

class Ethereum : public Cryptocurrency{
    float current_value;
public:
    Ethereum();
    virtual void assign_current_value(float);
    virtual float get_current_value();
    
    
};

class Litecoin : public Cryptocurrency{
    float current_value;
public:
    Litecoin();
    virtual void assign_current_value(float);
    virtual float get_current_value();
};


#endif
