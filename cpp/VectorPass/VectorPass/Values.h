//
//  Values.h
//  VectorPass
//
//  Created by efe on 10/30/12.
//  Copyright (c) 2012 efe. All rights reserved.
//

#ifndef VectorPass_Values_h
#define VectorPass_Values_h



#endif

#include <iostream>
#include <vector>

using namespace std;

class PassValue{
public:
    PassValue(){
        
    }
    
    PassValue(vector<int*>&_source){
        _values = _source;
    }
    
    ~PassValue(){
        
    }
    
    void printValues(){
        for (unsigned int i=0; i<_values.size(); i++) {
            cout<<*_values[i]<<endl;
        }
    }
    
    
    //pointer Arithmetic
    void addValues(){
        for(unsigned int i=0;i<_values.size();i++){
            sumVector.push_back(new int(rand() % 100));
            //cout<<addPoinerValues(_values[i], sumVector[i])<<endl;
            addedValues.push_back((_values[i], sumVector[i]));
            cout<<*addedValues[i]<<endl;
        }
        
        /*
        int x1 = 10;
        int x2 = 20;
        int *x1p = &x1;
        int *x2p = &x2;
        cout<<addPoinerValues(x1p,x2p)<<endl;
         */
        
    }
    
    
    int addPoinerValues(int* x, int* y){
        return *x+*y;
    }
    
    std::vector<int*>_values;
    std::vector<int*>addedValues;
    std::vector<int*>sumVector;
};
