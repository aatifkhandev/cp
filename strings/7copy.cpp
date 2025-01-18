//copy function
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char input1[100]="abcd";
    char input2[100]="def";

    cout<<"before copying";
    cout<<"input 1 :"<<input1<<endl;
    cout<<"input2 : "<<input2<<endl;
    strcpy(input1,input2);

     cout<<"after copying";
    cout<<"input 1 : "<<input1<<endl;
    cout<<"input2  : "<<input2<<endl;
    
}