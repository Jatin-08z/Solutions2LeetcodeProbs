//
//  ZigZag Conversion.cpp
//  learn C++
//
//  Created by jatin saini on 08/02/20.
//  Copyright © 2020 com.Jatin. All rights reserved.
//
//URL to Prob:https://leetcode.com/problems/zigzag-conversion/
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>
#include <stack>
using namespace std;

string convert(string s, int numRows) {
    if(numRows<=1 or s=="") return s;
    vector<vector<char>> v;
   
    int j=0;
    for(int i=0;i<numRows and s[i]!='\0';i++){
        vector<char> c;
        c.push_back(s[i]);
        v.push_back(c);
        j++;
    }
    //assuming for now that we have some string left.
    long int Xx = v.size()-2;
    int ascend = 1,descend = 0;
    char c;
    long int top = 0, bottom = v.size()-1;
    
    //cout<<j<<' ';
    while(s[j]!='\0'){
        
        c = s[j];
        v[Xx].push_back(c);
        
        if(Xx==top){
            Xx+=1;
            descend = 1;
            ascend  = 0;
            j++;
            continue;
        }
        else
        {
            if(Xx==bottom){
                Xx-=1;
                ascend = 1;
                descend = 0;
                j++;
                continue;
            }
            else{
                if(ascend){
                    Xx-=1;
                    j++;
                }
                else{
                    if(descend){
                        Xx+=1;
                        j++;
                    }
                }
            }
        }
    }
    
      string ans = "";
      for(int i=0;i<v.size();i++){
          for(int j=0;j<v[i].size();j++){
              ans+=v[i][j];
              //cout<<v[i][j]<<' ';
          }
          //cout<<'\n';
      }
      //cout<<ans<<'\n';
    return ans;
}



int main(){
    
////    string s = "BANDITQUEEN";
////    cout<<convert(s,4);
//    vector<char> c1 = {'A','b','f','g','d','w'};
//    vector<char> c2 = {'w','s','k','a','x','v'};
//    vector<char> c3 = {'z','A','F','x','p','q','k'};
//
//    vector<vector<char>> v;
//
//    v.push_back(c1);
//    v.push_back(c2);
//    v.push_back(c3);
//
//    for(int i=0;i<3;i++){
//        for(int j=0;j<v[i].size();j++){
//            cout<<v[i][j]<<' ';
//        }
//        cout<<'\n';
//    }
//
//
//
//    v[0].push_back('h');
//    v[1].push_back('l');
//    v[2].push_back('k');
//    v[3].push_back('o');
//
//    cout<<v.size()<<'\n';
    
    vector<vector<char>> v;
    string s = "PAYPALISHIRING";
    int numRows = 5;
    
//    for(int i=0;i<numRows and s[i]!='\0';i++){
//        vector<char> c;
//        c.push_back(s[i]);
//        v.push_back(c);
//    }
//
    
    cout<<convert(s,3)<<'\n';;
    
 
}
