//
//  valid Palindrome.cpp
//  learn C++
//
//  Created by jatin saini on 08/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
//url to problem : https://leetcode.com/problems/valid-palindrome/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
using namespace std;
bool isNum(int ASCII_val){
    
    if(ASCII_val>=48 and ASCII_val<=57)
        return true;
    else
        return false;
    
}
bool areEquivalent(char c1, char c2){
    
    
    int ASCII_val1 = int(c1),ASCII_val2 = int(c2);
    //cout<<ASCII_val1<<' '<<ASCII_val2<<'\n';
    
    // same letters/numerals.
    if(ASCII_val1 == ASCII_val2)
        return true;
    
    else
    {   // both characters being non numeric and they are same letters but in different case.
        if((!isNum(ASCII_val1) and !isNum(ASCII_val2) ) and (abs(int(c1)-int(c2))==32))
            return true;
    }
    return false;
}

bool isValidChar(char c){
    
    if(int(c)<=122 and int(c)>=97)
        return true;
    else{
        if(int(c)<=90 and int(c)>=65)
            return true;
        else
        {
            if(int(c)>=48 and int(c)<=57)
                return true;
        }
    }
    return false;
}
bool isPalindrome(string s) {

    if(s=="") return true;
    int i=0;
    long int j = s.length()-1;
    int count = 0;
    
    while(i<j){
        char c1 = s[i];
        char c2 = s[j];
       
        if(!isValidChar(c1) and !isValidChar(c2) ){
            i++;
            j--;
            continue;
        }
           else{
            if(!isValidChar(c1) and isValidChar(c2)){
                i++;
                continue;
            }
            else{
                if(isValidChar(c1) and !isValidChar(c2)){
                    j--;
                    continue;
                }
                else{
                   
                    if(!areEquivalent(c1,c2))
                        return false;
                    
                    i++;
                    j--;
                }
                
            }
        }
    }
    return true;
}

int main(){
    //  if( !((abs(int(c1)-int(c2))==32) or (ASCII_val1==ASCII_val2)))
    
    string test = "0P";
    cout<<isPalindrome(test)<<'\n';
   
    
}
