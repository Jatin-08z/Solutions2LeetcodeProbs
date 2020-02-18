//
//  Pascal's Triangle.cpp
//  learn C++
//
//  Created by jatin saini on 13/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
//URL: https://leetcode.com/problems/pascals-triangle/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
#include <map>
#include<iostream>
using namespace std;
vector<vector<int>> generate(int numRows) {
   
    vector<vector<int>> v;
    vector<int> aux_V = {1};
    v.push_back(aux_V);
    
    if(numRows==1)
        return v;
   
    aux_V.push_back(1);
    v.push_back(aux_V);
    
    if(numRows==2)
        return v;
    
    
    int j = 2;
    
    while(j<numRows){
   
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
        v.push_back(inst);
        aux_V = inst;
        j++;
}
    
    return v;
}
int main(){
    
    vector<vector<int>> v;
    int num;
    cin>>num;
    
    v = generate(num);
    //cout<<v.size()<<' ';
    for(int i=0;i<v.size();i++){
        
        for(int j=1;j<=num-(i+1);j++)
            cout<<' ';
        
        for(int x = 0;x<v[i].size();x++)
            cout<<v[i][x]<<',';
        
        cout<<'\n';
    }
}
