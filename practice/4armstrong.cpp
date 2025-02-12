#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int dup =n;
    int sum =0;
    while(n>0){
        int lastDigit = n%10;
       sum = sum+(lastDigit*lastDigit*lastDigit);
        n=n/10;
    }
    if(sum==dup){
        cout<<"armstrong";
    }else{
        cout<<"no";
    }
}