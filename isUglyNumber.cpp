//
//  isUglyNumber.cpp
//  learn C++
//
//  Created by jatin saini on 17/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
//URL: https://leetcode.com/problems/ugly-number/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
#include <map>
#include<iostream>
using namespace std;

bool isUgly(int num) {
    
    int all[3] = {2,3,5};
    int _divides;
    
    while(num>1){
        
        _divides = 0;
        for(int i=0;i<3;i++){
            if(num%all[i]==0)
                _divides = all[i];
        }
        if(!_divides)
            return false;
        num/=_divides;
    }
    return true;
}



int main(){
    
    int test = 14;
    cout<<isUgly(test)<<'\n';
    
}
