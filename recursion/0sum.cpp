//recursion from scratch
//code 1 - factorial
#include<iostream>
using namespace std;
int sum (int n){
    if(n==0){
        return 0;
    }
    /*int smallerProblem=factorial(n-1);
    int biggerProblem = n*smallerProblem;
    return biggerProblem;*/

    return n+sum(n-1);
}



int main(){
    int n;
    cin>>n;
    int ans = sum(n);
    cout<<ans<<endl;
}