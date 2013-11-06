//
//  MoreValuesReferences.h
//  VectorPass
//
//  Created by efe on 10/30/12.
//  Copyright (c) 2012 efe. All rights reserved.
//

#ifndef VectorPass_MoreValuesReferences_h
#define VectorPass_MoreValuesReferences_h



#endif

#include <iostream>

using namespace std;

class MoreValuesReferences{
public:
    MoreValuesReferences(){
        
    }
    
    MoreValuesReferences(vector<int*>&_vecA, vector<int*>&_vecB):vecA(_vecA),vecB(_vecB){
//        vecA = _vecA;
//        vecB = _vecB;
    }
    
    ~MoreValuesReferences(){
        
    }
    
    void printTheVector(vector<int*>&toPrintVector){
        for(unsigned int i=0;i<toPrintVector.size();i++){
            //cout<<"hello there "<<i<<endl;
            cout<<"here is the vector "<<*toPrintVector[i]<<endl;
        }
    }
    
    void addTheReferences(vector<int*>&v1, vector<int*>&v2){
        for(unsigned int i=0;i<v1.size();i++){
            cout<<"this is the adding of the vector references "<<addPoinerValues(v1[i], v2[i])<<endl;
            addedVectorsAsReferences.push_back(new int(addPoinerValues(v1[i], v2[i])));
            cout<<"and the adding to the vector is "<<*addedVectorsAsReferences[i]<<endl;
        }
    }
    
    int addPoinerValues(int* x, int* y){
        return *x + *y;//this works with +,/,-, %
    }
    
    vector<int*>vecA;
    vector<int*>vecB;
    vector<int*>addedVectorsAsReferences;
};
