//recursion from scratch
//code 4 - print counting  123456
#include<iostream>
using namespace std;

void print(int n){
    if(n<=0){
        return;
    }
    //recursive function
    print(n-1);
    cout<<n<<endl;
}




int main(){
    int n;
    cin>>n;
    print(n);
  
}