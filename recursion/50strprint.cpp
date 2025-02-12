//striver playlist
//print name n times using recursion
#include<iostream>
using namespace std;


void print(int n){
    if(n<=0){
        return;
    }
    cout<<"aatif"<<endl;
    print(n-1);
}
/*void print(int i, int n){
    if(i>n){
        return;
    }

    cout << "Raj" << endl;
    //cout << i << endl;
    print(i+1 , n);
}*/

int main(){
int n;
cin>>n;
print(n);
}