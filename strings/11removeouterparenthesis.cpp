//remove outer most parenthesis
#include<bits/stdc++.h>
using namespace std;
  string removeOuterParentheses(string s) {
        int st=0;
        string ans;
        for(auto a: s){
            if(a=='('){
                if(st>0){
                    ans+='(';
                }
                st++;
            }else{
                if(st>1){
                    ans+=')';
                }
                st--;
            }
        }
        return ans;
    }
