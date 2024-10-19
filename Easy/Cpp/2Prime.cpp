// Write a program to determine if a number is prime.
// Input: number = 7
// Output: Prime
// Explanation: 7 has no divisors other than 1 and itself, so it is a      prime number.

#include<iostream>
using namespace std;

bool Prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
     int n;
    cout << "Enter a Number: ";
    cin >> n;
    if(Prime(n)){
        cout<<"It is Prime";
    }else{
        cout<<"Not a Prime";
    }
}