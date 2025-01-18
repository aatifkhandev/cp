#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<i<<endl;
i++;
cout<<i<<endl;

//incorrect way
    /*int *p;
    cout<< p << endl;
    cout<< *p <<endl;

    (*p)++;
    cout<< *p <<endl;
*/

//correct way
int *p=0;
    cout<< p << endl;
    cout<< *p <<endl;

    (*p)++;
    cout<< *p <<endl;



}