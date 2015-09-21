#include <iostream>
using namespace std;
#include "Coffee.cpp"
class D: public Coffee
{
public:

	float Print (){
		cout<<"D....100.0"<<endl;
		return 100.0;
	}
	//float Cost (){return 100.0;}
	/* data */
};
