//
//  MoreValues.h
//  VectorPass
//
//  Created by efe on 10/30/12.
//  Copyright (c) 2012 efe. All rights reserved.
//

#ifndef VectorPass_MoreValues_h
#define VectorPass_MoreValues_h



#endif

#include <iostream>

using namespace std;

class MoreValues{
public:
    MoreValues(){
        
    }
    
    MoreValues(vector<int*>_vecA, vector<int*>_vecB):vecA(_vecA),vecB(_vecB){
//        vecA = _vecA;
//        vecB = _vecB;
    }
    
    ~MoreValues(){
        
    }
    
    void addTheVectors(){
        for(unsigned int i=0;i<vecA.size();i++){
            cout<<addPoinerValues(vecA[i],vecB[i])<<endl;
        }
    }
    
    
    int addPoinerValues(int* x, int* y){
        return *x+*y;
    }
    
    vector<int*>vecA;
    vector<int*>vecB;
};
