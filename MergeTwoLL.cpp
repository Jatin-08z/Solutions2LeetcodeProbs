//
//  MergeTwoLL.cpp
//  learn C++
//
//  Created by jatin saini on 02/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
//URL: https://leetcode.com/problems/merge-two-sorted-lists/

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
using namespace std;


 // Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    
    if(l1==nullptr and l2 == nullptr)
        return nullptr;
    
    else{
        
        if(l1==nullptr and l2!=nullptr){
            
            ListNode * temp2 = l2->next;
            l2->next = mergeTwoLists(nullptr,temp2);
            return l2;
        }
        else{
            if(l1!=nullptr and l2==nullptr){
            
              ListNode * temp1 = l1->next;
              l1->next = mergeTwoLists(temp1,nullptr);
              return l1;
            }
            else{
                if(l1!=nullptr and l2!=nullptr){
                    ListNode * temp1 = l1->next;
                    l1->next = l2;
                    
                    ListNode * temp2 = l2->next;
                    l2->next = mergeTwoLists(temp1,temp2);
                    return l1;
                }
            }
            
            
        }
            
    }
    return nullptr;
}

int main(){

    ListNode * n1 = new ListNode(1);
    ListNode * n2 = new ListNode(2);
    ListNode * n3 = new ListNode(3);
    ListNode * n4 = new ListNode(4);
    ListNode * n5 = new ListNode(5);
    ListNode * n6 = new ListNode(6);
    
  
    ListNode * k1 = new ListNode(16);
    ListNode * k2 = new ListNode(17);
    ListNode * k3 = new ListNode(19);
    
    n1->next =  n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    
    k1->next = k2;
    k2->next = k3;
    
    
    
    ListNode * ptr = newConnection(n1,k1);
    
    while(ptr!=nullptr){
        cout<<ptr->val<<' ';
        ptr = ptr->next;
    }
    
   
    
}

