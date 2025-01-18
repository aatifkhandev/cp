//check if strings are rotation of each other
#include<bits/stdc++.h>
using namespace std;
bool rotations(string s1,string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    string temp = s1+s1;
    if(temp.find(s2)!=-1){
        return true;
    }
    return false;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<rotations(s1,s2);
}