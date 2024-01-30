//reverse a string 
#include<bits/stdc++.h>
using namespace std;


    int reversestring(string &s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
        swap(s[i],s[j]);
            i++;
            j--;
    }
    }
int main(){
    string s;
    cin>>s;
    reversestring(s);
    cout<<s<<endl;
}







    /*string s ="aatif";
    reversestring(s);
    cout<<s<<endl;
}*/
