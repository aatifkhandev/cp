#include<iostream>
using namespace std;

int sumOfn(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    int ans = sumoOfn(n);

    cout<<ans<<endl;

    
    
}