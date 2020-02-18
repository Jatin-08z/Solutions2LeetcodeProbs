//
//  max_subArray.cpp
//  learn C++
//
//  Created by jatin saini on 04/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
using namespace std;

//URl: https://leetcode.com/problems/maximum-subarray/

int maxSubArray(vector<int>& nums) {
    
    vector<int> v;
    int max = INT_MIN;
    
    if(nums.size()==1)
        return   nums[0]; //return nums[0];
   
    int sum = 0;
    
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum>max)
            max = sum;
    }
    
    
    int value = sum;
    for(int i=0;i<nums.size()-1;i++){
        value-=nums[i];
        if(max<value)
            max = value;
    }
    

     
    
    value = sum;
    for(long int i= nums.size()-1;i>0;i--){
        value-=nums[i];
        if(max<value)
        max = value;
        
    }

    
  
    int temp = sum;
    for(long int j = nums.size()-1;j>=2;j--){
        temp-=nums[j];
        value = temp;
        for(int i = 0;i<=j-3;i++){
            value-=nums[i];
            v.push_back(value);
            if(max<value)
             max = value;
        }
     
    }
    



    for(long int i=1;i<=nums.size()-2;i++){
       
        if(nums[i]>max)
            max  = nums[i];
    }
  

    
    return max;

}

int main(){

    vector<int> a;
    a.push_back(-1);
    
    a.push_back(0);
    a.push_back(-2);
//    a.push_back(4);
//    a.push_back(-1);
//     a.push_back(2);
//     a.push_back(1);
//     a.push_back(-5);
////     a.push_back(4);
    
  
    cout<<maxSubArray(a)<<'\n';
}
