#include <iostream>

using namespace std;

//declare the functions
void simpleFunction();

int addingValues(int value, int amount);
//let's gain some efficiency
int addingByReference(const int& value, const int& amount);

int main(){

	simpleFunction();
	cout<<addingValues(10,30)<<"\n";

	int x = 100;
	int y = 200;
	cout<<addingByReference(x,y)<<"\n";


	return 0;
}

void simpleFunction(){

	cout<<"c++ is very fun, right?\n";
}

int addingValues(int value, int amount){

	return value + amount;
}

//using references means that values are not copied
int addingByReference(const int& value, const int& amount){

	return value+amount;
}