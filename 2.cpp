#include <iostream>
#include "Condiments.cpp"
#include "Order.cpp"
using namespace std;
class Cond2: public Condiments{
  public:
  Cond2(Order* o):Condiments(o) {}
  float Print(){
    float n = obj->Print();
    cout<<"Mocha : "<<"0.2"<<endl;
    return n+0.2;
  }
};
