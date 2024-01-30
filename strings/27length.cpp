#include <bits/stdc++.h>
using namespace std;

int getlength(string s){
 int count=0;

    for(int i=0;i<s.length();i++){
        count++;
       
    }
    return count;
}

int main(){
    string s= " hello world";

    int ans = getlength(s);

    cout<<ans<<endl;

   
}