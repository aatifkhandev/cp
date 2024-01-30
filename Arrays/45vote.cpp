#include<iostream>
using namespace std;

int vote(int n){
    if(n>18){
        cout<<"can vote"<<endl;
}else if(n<=18){
    cout<<"can't vote"<<endl;
}

}

int main(){
    int n;
    cin>>n;
  int ans = vote(n);
  cout<<ans<<endl;
}