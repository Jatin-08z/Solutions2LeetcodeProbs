//
//  Linked List Cycle.cpp
//  learn C++
//
//  Created by jatin saini on 13/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
//URL : https://leetcode.com/problems/linked-list-cycle/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
#include <map>
#include<iostream>
#include <algorithm>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode *head) {
    
    vector<ListNode *> ptrs;
    vector<ListNode *> :: iterator it;
    ListNode * ptr = head;
    
    while(ptr!=nullptr){
        
        it = find(ptrs.begin(), ptrs.end(), ptr);
        if(it==ptrs.end())
            ptrs.push_back(ptr);
        else{
            if(*it==ptr){
                cout<<"Yes It has a cycle"<<'\n';
                return 1;
            }
        }
        ptr = ptr->next;
    }
    cout<<"No it does Not have a cycle"<<'\n';
    return 0;
}


int main(){
    ListNode * head = NULL;
    ListNode * n1 = new ListNode(90);
    ListNode * n2 = new ListNode(78);
    ListNode * n3 = new ListNode(23);
    ListNode * n4 = new ListNode(23);
    
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n1;

    head = n1;
    vector<ListNode * > ptrs;
    
    vector<ListNode * > :: iterator it;
    
    ListNode * ptr = head;
    
    
    while(ptr!=nullptr){
        
        it = find(ptrs.begin(), ptrs.end(), ptr);
        
        if(it==ptrs.end())
            ptrs.push_back(ptr);
        else{
            if(*it==ptr){
                cout<<"Yes It has a cycle"<<'\n';
                return 0;
            }
        }
        
        ptr = ptr->next;
    }
    cout<<"No it does Not have a cycle"<<'\n';
    return 0;
    
}
