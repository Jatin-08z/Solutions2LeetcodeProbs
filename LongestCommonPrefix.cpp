//
//  LongestCommonPrefix.cpp
//  learn C++
//
//  Created by jatin saini on 02/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
// URL https://leetcode.com/problems/longest-common-prefix/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
 
    char standard_char = ' ', current_char = ' ';
    string current_str = " ",res = " ";
    string standard_str = strs[0];
    
    for(int i=0;i<standard_str.length();i++){
        
        standard_char = standard_str[i];
        for(int j=1;j<strs.size();j++){
            
            current_str = strs[j];
            if(current_str[i]=='\0' or current_str[i]!=standard_char)
                return res;
        }
        
    
        res+=standard_char;
    }
    
    return res;
    
}
int main(){

    vector<string> v;
  
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    v.push_back("jaa");
    v.push_back("ja");
    v.push_back("jatin");

    cout<<longestCommonPrefix(v)<<'\n';
    
    
    
}

