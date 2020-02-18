//
//  climb_stairs.cpp
//  learn C++
//
//  Created by jatin saini on 10/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
//Problem URL:https://leetcode.com/problems/climbing-stairs/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
#include <map>
using namespace std;
   
int climbStairsPlainRecursive(int n) {
 
    if(n<=0)
        return 0;
    else{
        if(n==1)
            return 1;
        else{
            if(n==2)
                return 2;
            else{
                return climbStairsPlainRecursive(n-1)+climbStairsPlainRecursive(n-2);
            }
        }
    }
     
    
}

int climbStairs(int n){
    
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    int value = 0;
    
    for(int i=2;i<=n;i++){
        value = v[i-1]+v[i-2];
        v.push_back(value);
        cout<<value<<' ';
        
    }
    cout<<'\n';
    return v[n];
}



int main(){
    

    cout<<climbStairs(7)<<'\n';
    
    
}
