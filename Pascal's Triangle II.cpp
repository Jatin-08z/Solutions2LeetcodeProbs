//
//  Pascal's Triangle II.cpp
//  learn C++
//
//  Created by jatin saini on 14/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
//Url: https://leetcode.com/problems/pascals-triangle-ii/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
#include <map>
#include<iostream>
using namespace std;

vector<int> getRow(int rowIndex) {
    
    //O(k+1) memory allowed.
    
    
    
    
    
    
}



vector<int> getRow(int rowIndex) {
    
    vector<int> aux_V;
    if(rowIndex<0)
        return aux_V;
        
    aux_V.push_back(1);
    if(rowIndex==0)
        return aux_V;
    
   aux_V.push_back(1);
   if(rowIndex==1)
        return aux_V;
    
    int j = 2;
    while(j<=rowIndex){
        
        vector<int> inst;
        for(int i=0;i<aux_V.size();i++){
        
                    if(i==0){
                     inst.push_back(aux_V[i]);
                     inst.push_back(aux_V[i+1]+aux_V[i]);
                    }
        
                    else{
        
                        if(i==aux_V.size()-1){
                            inst.push_back(aux_V[i]);
                            continue;
                        }
                        else{
                            inst.push_back(aux_V[i]+aux_V[i+1]);
                            continue;
                        }
                    }
    }
        aux_V = inst;
        if(j==rowIndex)
            break;
        j++;
    }
    return aux_V;
    
}

int main(){

    vector<int> v;
    int rowIndx;
    cin>>rowIndx;

    v = getRow(rowIndx);
   
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<' ';
    
}


