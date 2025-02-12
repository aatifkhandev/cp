#include <bits/stdc++.h>
using namespace std;

int main(){
    string s= " hello world";

    for(int i=0;i<s.length();i++){
        if(s.length()%2==0){
         cout<<"even length"<<s<<endl;
        }else{
            cout<<"odd";
        }
    }
}