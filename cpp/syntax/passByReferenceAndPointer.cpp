#include <iostream>

using namespace std;

void incrementByReference(int& value);

void incrementbyPointer(int *value);

int main(){

	int value = 0;
	incrementByReference(value);
	cout<<value<<"\n";
	incrementByReference(value);
	cout<<value<<"\n";

	value = 0;
	cout<<"reset the value to "<<value<<"\n";
	incrementbyPointer(&value);
	cout<<value<<"\n";
	incrementbyPointer(&value);
	cout<<value<<"\n";

	return 0;
}

void incrementByReference(int& value){
	value++;
}

void incrementbyPointer(int *value){
	(*value)++;
}