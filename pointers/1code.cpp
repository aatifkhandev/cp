//arrays and pointers
#include<iostream>
using namespace std;
int main(){
    int a[0];
    int *p = &a[0];
    cout<<*p<<endl;
    cout<<a<<endl;

    
    cout<<sizeof(p)<<endl;
    cout<<sizeof(a)<<endl;


}