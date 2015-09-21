#include <iostream>
#include "Condiments.cpp"
#include "Order.cpp"
using namespace std;
class Cond1: public Condiments{
  public:
    Cond1(Order* o):Condiments(o) {}
  float Print(){
    float n = obj->Print();
    cout<<"Steamed Milk : "<<"0.1" <<endl;
    return n + 0.1;
  }
} ;
