//remove consequtive characters
#include<bits/stdc++.h>
using namespace std;
  string removeConsecutiveCharacter(string S)
    {
        // code here.
        string str="";
        for(int i=0;i<S.length();i++){
            if(S[i]!=S[i+1]){
                str+=S[i];
            }
        }
        return str;
        
    }
    int main(){
        string S = "aaabbccd";
        string ans = removeConsecutiveCharacter(S);
        cout<<ans<<endl;
    }