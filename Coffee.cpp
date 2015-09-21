#ifndef COFFEE_CPP
#define COFFEE_CPP

#include <iostream>
using namespace std;
#include "Order.cpp"
class Coffee : public Order{
public:

    virtual float  Print () {};
	/* data */
};
#endif
