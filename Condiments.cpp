#ifndef CONDIMENTS_CPP
#define CONDIMENTS_CPP

#include <iostream>
using namespace std;
#include "Order.cpp"

class Condiments: public Order{
  public:
    Order* obj;
    Condiments( Order* o){
        obj=o;
    }
    virtual float Print()=0;

};
#endif
