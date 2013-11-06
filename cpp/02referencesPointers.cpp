//straight to pain
#include <iostream>

using namespace std;

int main(){

	//here comes a mind game, ok?
	//1-references
	int value = 100;
	int& valueReference = value;

	cout<<"this is a reference: "<<valueReference<<"\n";

	//2-simple pointer
	int secondValue=10;
    int* secondValuePointer;
    secondValuePointer=&secondValue;

	cout<<"this is a simple pointer: "<<secondValue<<endl;
    cout<<"this is his address: "<<secondValuePointer<<endl;

    //3-redefine a pointer
    int thirdValue;
    int* thirdValuePointer = new int;
    thirdValuePointer = &thirdValue;
    thirdValue = 555;

    cout<<"the third value is: "<<thirdValue<<endl;
    cout<<"and his address is: "<<thirdValuePointer<<endl;

    //4-arithmetic
    int fourthValue = 0;
    int* fourthValuePointer = &fourthValue;

    /*
    //not a correct way of doing it
    fourthValuePointer = fourthValuePointer + 10;

    cout<<fourthValuePointer<<endl;
    */

    *fourthValuePointer = *fourthValuePointer + 10;
    cout<<"the value is: "<<*fourthValuePointer<<endl;
    cout<<"and the address: "<<fourthValuePointer<<endl;

	return 0;
}