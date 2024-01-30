#include<iostream>
using namespace std;


int isPrime(int n){
    if(n==0){
        return 0;
    }
    for(int i=1;i<=2;i++){
        if(n%i==0){
            return 1;
        }else{
            return 1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int ans = isPrime(n);

    
}