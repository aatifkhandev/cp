//comparing two strings if they are equal returning true or else false
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char input1[100];char input2[100];
    cout<<"enter the name";
    cin>>input1;
    cin>>input2;
    if(strcmp(input1,input2)==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}