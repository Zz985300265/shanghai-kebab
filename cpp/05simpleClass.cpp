#include <iostream>

using namespace std;

//a simple class
//I like objective-c descriptive names!
class simpleCPPClass{

public:
	//members
	float	value;

	//Constructors
	//empty constructor
	simpleCPPClass(){}
	simpleCPPClass(const float& iValue):value(iValue){

	}
	//destructor
	~simpleCPPClass(){}

	void printValue(){
		cout<<value<<endl;
	}

	void addValue(const float& add){
		value = value + add;
	}

	void substractValue(const float& sub){
		value = value - sub;
	}
};


int main(){

	simpleCPPClass* mSimpleClass;

	mSimpleClass = new simpleCPPClass(10);

	mSimpleClass->printValue();
	mSimpleClass->addValue(100.0f);
	mSimpleClass->printValue();
	mSimpleClass->substractValue(90.0f);
	mSimpleClass->printValue();

	//clean the istance, housekeeping
	delete mSimpleClass;

	return 0;
}