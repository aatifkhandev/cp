#include<bits/stdc++.h>
using namespace std;

int remove(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s[count++] =s[i];
            s[count]='\0';
        }
    }
}

int main(){
    string s = "h e l l o";

    int ans=remove(s);
    cout<<ans<<endl;

}