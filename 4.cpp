#include <iostream>
#include "Condiments.cpp"
#include "Order.cpp"
using namespace std;
class Cond4: public Condiments{
  public:
  Cond4(Order* o):Condiments(o) {}
  float Print(){
    float n = obj->Print();
    cout<<"Whip : "<<"0.1"<<endl;
    return n+0.1;
  }

} ;
