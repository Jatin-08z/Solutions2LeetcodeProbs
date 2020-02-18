
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>


//URL : https://leetcode.com/problems/roman-to-integer/
using namespace std;
int RomanNumeralEquivalen(char c){

  if(c == '\0')
      return 0;
     
  if(c == 'I')
         return 1;
      else{
          if(c == 'V')
              return 5;
          else{
                  if(c == 'X')
                      return 10;
                  else{
                      if(c == 'L')
                          return 50;
                      else{
                          if(c == 'C')
                              return 100;
                          else{
                              if(c == 'D')
                                  return 500;
                              else{
                                  if(c == 'M')
                                      return 1000;
                              }
                          }
                      }
                  }
          }
      }
    return 0;
}


int specialCase(char P, char S){
    
    
    if((P == 'I' or P == 'i') and (S == 'V' or S == 'v'))
        return 4;
    else{
        if((P == 'I' or P == 'i') and (S =='X' or S =='x'))
            return 9;
        else{
            if((P == 'X' or P == 'x') and (S == 'C' or S == 'c'))
                return 90;
            else{
                if((P == 'X' or P == 'x') and (S == 'L' or S == 'l'))
                    return 40;
                else{
                    if((P == 'C' or P == 'c') and (S == 'M' or S == 'm'))
                        return 900;
                    else{
                        if((P == 'C' or P == 'c') and (S == 'D' or S == 'd'))
                            return 400;
                    }
                }
            }
        }
    }
    
    return 0;
    
}



int main(){
    
    
    string S;
    cin>>S;
     
    
    long int size = S.length();
    int sum = 0;
    
    for(int i=0;i<size;i++){
        
        if((i+1)<size){
            if(specialCase(S[i], S[i+1])){
                sum+=specialCase(S[i], S[i+1]);
                i+=1;
            }
              else
                sum+=RomanNumeralEquivalen(S[i]);
        }
           else
               sum+= RomanNumeralEquivalen(S[i]);
        
    }
    
    
    cout<<sum<<'\n';
    
}
