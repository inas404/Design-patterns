#include <iostream>
#include "Condiments.cpp"
#include "Order.cpp"
using namespace std;
class Cond3: public Condiments{
  public:
  Cond3(Order* o):Condiments(o) {}
  float Print(){
     float n = obj->Print();
    cout<<"Soy : "<<"0.15"<<endl;
    return n+0.15;
  }
} ;
