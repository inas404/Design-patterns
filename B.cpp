#include <iostream>
using namespace std;
#include "Coffee.cpp"
class B: public Coffee
{
public:

	float Print (){
		cout<<"B....70.0"<<endl;
		return 70.0;
	}
};
