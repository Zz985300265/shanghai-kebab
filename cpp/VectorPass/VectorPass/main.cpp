//
//  main.cpp
//  VectorPass
//
//  Created by efe on 10/30/12.
//  Copyright (c) 2012 efe. All rights reserved.
//

#include <iostream>
#include "Values.h"
#include "MoreValues.h"
#include "MoreValuesReferences.h"

using namespace std;

int main(int argc, const char * argv[])
{

    
    vector<int*>values;
    vector<int*>randomValuesA;
    vector<int*>randomValuesB;
    vector<int*>randomValuesRefA;
    vector<int*>randomValuesRefB;
    
    for(unsigned int i=0;i<10;i++){
        values.push_back(new int(i));
    }
    
    for(unsigned int i=0;i<7;i++){
        int randomX = rand()%100;
        int randomY = rand()%100;
        randomValuesA.push_back(new int(randomX));
        randomValuesB.push_back(new int(randomY));
        
        randomValuesRefA.push_back(new int(randomX));
        randomValuesRefB.push_back(new int(randomY));
    }
    
    PassValue passValue;
    MoreValues moreValues;
    MoreValuesReferences moreValuesReferences;
    
    passValue = PassValue(values);
    passValue.printValues();
    passValue.addValues();
    
    moreValues = MoreValues(randomValuesA,randomValuesB);
    moreValues.addTheVectors();
    
    
    moreValuesReferences = MoreValuesReferences(randomValuesRefA, randomValuesRefB);
    //moreValuesReferences.printTheVector(randomValuesRefA);
    moreValuesReferences.addTheReferences(randomValuesRefA, randomValuesRefB);
    
    return 0;
    
}

