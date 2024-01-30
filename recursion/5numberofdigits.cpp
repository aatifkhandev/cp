//recursion from scratch
//code 5 - number of digits -  156 - 3
#include<iostream>
using namespace std;
int count (int n){
    if(n==0){
        return 0;

    }
    //int smallerProblem = count(n/10);
    //return smallerProblem+1;

    return count(n/10)+1;
}


int main(){
    int n;
    cin>>n;
    int ans  = count(n);
    cout<<ans<<endl;
}
