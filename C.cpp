#include <iostream>
using namespace std;
#include "Coffee.cpp"
class C: public Coffee
{
public:

	float Print (){
		cout<<"C....80.0"<<endl;
		return 80.0;
	}

};
