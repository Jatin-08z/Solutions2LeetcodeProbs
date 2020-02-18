
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
using namespace std;

//URL: https://leetcode.com/problems/reverse-integer/

int digitCounter(int n){
    
    int i=0;
    while(n>=1){
        n = n/10;
        i++;
    }
    return i;
}
int negreverseInt(int num){
    
    int standard = pow(-2,31);
    int temp = num;
    int numDigits = digitCounter(-1*temp);
    
    int i = numDigits - 1;
    int sum = 0, currDigit,Diff;
    
    while(temp<=-1){
        currDigit = temp%10;
        
        
        Diff = standard - sum;//pow(10,i)* currDigit;
        
        
        if((pow(10,i)* currDigit)<Diff)
            return 0;
        else{
            sum += pow(10,i)* currDigit;
        }
        
        i--;
        temp/=10;
    }
    
        return sum;
}

int reverseInt(int num){
    
    int standard = pow(2,31)-1;
    int temp = num;
    
    int numDigits = digitCounter(temp);
    
    int i = numDigits - 1;
    int sum = 0, currDigit,Diff;
    
    while(temp>=1){
        currDigit = temp%10;
        
        Diff = standard - sum; //pow(10,i)* currDigit;
        if((pow(10,i)* currDigit)>Diff)
            return 0;
        else{
            sum += pow(10,i)* currDigit;
        }
        
        i--;
        temp/=10;
    }
   
        return sum;
}

int main(){
    
    int num;
    cin>>num;
    
    if(num<0)
        cout<<negreverseInt(num)<<'\n';
    else
        cout<<reverseInt(num)<<'\n';
    
    
    
}
