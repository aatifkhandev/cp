// Write a program to generate the Fibonacci series up to a given number.
// Example:
// Input: limit = 10
// Output: [0, 1, 1, 2, 3, 5, 8]
// Explanation: The Fibonacci series up to 10 is generated as [0, 1, 1, 2, 3, 5, 8].

#include<iostream>
using namespace std;

void Fibonacci(int n){
    if(n<1){
    cout<<"Invalid Numbers"<<endl;
    }
}


int main(){
  
  int n;
  cout<<"Enter a Number";
  cin>>n;

 if(Fibonacci(n)){
    for(int i=0;i<n;i++){
        cout<<i<<endl;
    }
 }
}




