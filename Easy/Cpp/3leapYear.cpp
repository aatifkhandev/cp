// Write a program to check if a given year is a leap year.
// Input: year = 2020
// Output: Leap Year
// Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.


#include<iostream>
using namespace std;

bool checkLeap(int year){
    if((year%4==0 && year%100!=0 ) || (year%400==0) ){
        return true;
    }else{
        return false;
    }

}


int main(){
 int year;
 cout<<"Enter a year : ";
 cin>>year;
 if(checkLeap(year)){
    cout<<"It is a leap year";
 }else{
    cout<<"It is not a leap year";
 }
}