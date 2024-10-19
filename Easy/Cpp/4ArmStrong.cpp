//  Write a program to check if a number is an Armstrong number.
// Input: number = 153
// Output: Armstrong Number
// Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.


#include<iostream>
using namespace std;
 

 int Armstrong(int number){

  int temp=number;
  int sum=0;
  while(number>0){
    int ld=number%10;
    sum=sum+(ld*ld*ld);
    number=number/10;
  }
  return sum==temp;
    
 }



int main(){
 int number;
 cout<<"Enter a number : ";
 cin>>number;
 if( Armstrong(number)){
   cout<<"Armstrong Number"; 
 }else{
    cout<<"Not a Armstrong Number";
 }

}