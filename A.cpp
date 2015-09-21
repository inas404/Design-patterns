#include <iostream>
using namespace std;
#include "Coffee.cpp"
class A : public Coffee
{
public:

	float Print (){
		cout<<"A....50.0"<<endl;
		return 50.0;
	}

};
