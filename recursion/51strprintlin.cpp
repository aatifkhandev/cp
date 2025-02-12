//print linearly from 1 to n
#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n<=0){
        return;
    }
    //recursive function
    print(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    print(n);
}