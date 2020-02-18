//
//  Valid Pallindrom II.cpp
//  learn C++
//
//  Created by jatin saini on 09/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//

// URL to prob:https://leetcode.com/problems/valid-palindrome-ii/ 
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
using namespace std;


bool validPalindrome(string s) {
    
    if(s.length()<=2)
        return true;
    
    int O_char = 0;
    long int i=0,j= s.length()-1;
    
    while(i<j){
        //lifeline used
        if(s[i]!=s[j] and O_char==1)
            return false;
        //lifeline not used yet
        if(s[i]!=s[j] and O_char==0){
          
            if((s[i+1]==s[j] and i+1<j) and (s[j-1]==s[i] and j-1>i)){
                
                if(s[i+2]==s[j-1] and (i+2)<(j-1)){
                //skip i
            }
            
        }
    }
        cout<<s[i]<<" "<<s[j]<<'\n';
        i++;
        j--;
}
    return true;
}


int main(){
"lcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupucul"
    cout<<validPalindrome("lcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupucul")<<'\n';
}
