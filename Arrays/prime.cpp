
#include<iostream>
#include<limits.h>
using namespace std;


bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
        }
       return true;
    }


int main(){
int n=29;
cout<<isPrime(n);

}