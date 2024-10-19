// Determining Even/Odd Numbers
// Example:
// Input: number = 4
// Output: Even

#include<iostream>
using namespace std;


bool oddEven(int n){
   
    if(n % 2 == 0){
        return true; 
    } else {
        return false; 
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if(oddEven(n)){
        cout << "Even";
    } else {
        cout << "Odd";
    }

    return 0;
}
