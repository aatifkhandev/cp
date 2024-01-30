//summation of first n numbers
#include<bits/stdc++.h>
using namespace std;

void summation(int sum,int n){
    if(n<1){
    cout<<sum;
    return;
}

summation(sum+n,n-1);
}
int main(){
    int n;
    cin>>n;
    int sum=0;
    summation(sum,n);
}
