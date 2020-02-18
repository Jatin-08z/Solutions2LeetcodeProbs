//
//  Merge_sorted_array.cpp
//  learn C++
//
//  Created by jatin saini on 03/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
// URL : https://leetcode.com/problems/merge-sorted-array/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    int s_indx = m;
    
    
    for(int i = 0;i<n;i++,s_indx++)
        nums1[s_indx] = nums2[i];
       
    for(int i=0;i<m+n;i++){
        for(int j = i+1;j<m+n;j++){
            if(nums1[j]<nums1[i])
                swap(nums1[i],nums1[j]);
        }
    }
}


int main(){

    vector<int> nums1;
    vector<int> nums2;
    
    
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(13);
    nums1.push_back(15);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    
    
    
    nums2.push_back(3);
    nums2.push_back(4);
    nums2.push_back(5);
    nums2.push_back(7);
    nums2.push_back(9);
    
    merge(nums1,4,nums2,5);
    
    for(int i=0;i<nums1.size();i++)
        cout<<nums1[i]<<' ';
 
}
