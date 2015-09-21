#include <iostream>
using namespace std;
#include "1.cpp"
#include "2.cpp"
#include "3.cpp"
#include "4.cpp"
#include "A.cpp"
#include "B.cpp"
#include "Condiments.cpp"
#include "Order.cpp"

int main()
{
    Order*b=new A();
    Order* o = new Cond1(new Cond3(b));
    cout << o->Print();

    return 0;
}
