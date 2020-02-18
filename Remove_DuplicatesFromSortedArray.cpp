//
//  Remove_DuplicatesFromSortedArray.cpp
//  learn C++
//
//  Created by jatin saini on 05/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
//URL : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
using namespace std;



int main(){
    
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(42);
    v.push_back(42);
    v.push_back(9896);
    v.push_back(42);
    
     v.erase(std::unique(begin(v), end(v)), end(v));
    
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<' ';
}
