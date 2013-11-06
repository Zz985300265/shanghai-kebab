//user arrays & sort
#include <iostream>
#include <cstdlib>

unsigned const int size = 10;

using namespace std;

int main(){

	int numbers[size];
	unsigned int a, b, i;

	//create some random values between 0 and 20
	for(i=0;i<size;i++){
		numbers[i] = rand()%30;
	}

	//display the numbers
	cout<<"The original array is: \n";
	for(i=0;i<size;i++){
		cout<<numbers[i]<<' ';
		cout<<"\n";
	}

	//sort them
	for(a=1;a<size;a++){
        for(b=size-1;b>=a;b--){
            if(numbers[b-1]>numbers[b]){
                //if out of order exchange numbers
                i=numbers[b-1];
                numbers[b-1]=numbers[b];
                numbers[b]=i;
            }
        }
    }

    //display the sorted array
    cout<<"\nSorted array is: \n";
    for(i=0;i<size;i++){
    	cout<<numbers[i]<<' ';
    	cout<<"\n";
    }


	return 0;
}