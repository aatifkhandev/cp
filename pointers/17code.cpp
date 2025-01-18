//creating  pointer with different datatypes
#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<&i<<endl;
    int *p = &i;
    cout<<p<<endl;

    float f = 10.2;
    float *pf = &f;
    cout<<f<<endl;

    double d = 122.32;
    double *pd = &d;
    cout<<d<<endl;
    
}