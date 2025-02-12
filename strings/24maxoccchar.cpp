#include<bits/stdc++.h>
using namespace std;

char maxoccchar(string s){
    int count[26]={0};
    int ans;
    int max=0;
    for(int i=0;i<s.length();i++){
        count[s[i]]++;

        if(max<count[s[i]]){
            max=count[s[i]];
            ans=s[i];
        }

    }
    return ans;
}


int main(){
 char s[] = "aatifkhan";
 int ans = maxoccchar(s);
 cout<<"the answer is" <<s <<endl;
}