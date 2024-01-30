#include<iostream>
using namespace std;

int isOdd(int n){
    if(n%2==0){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }
}

int main(){
    int n;
    cin>>n;
  int ans = isOdd(n);
  cout<<ans<<endl;
}