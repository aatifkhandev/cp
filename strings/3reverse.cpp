//reverse
#include<bits/stdc++.h>
using namespace std;

void swap(char &a , char &b){
    char temp =a ;
    a=b;
    b= temp;
}

void reverse(char name[], int n){
 
 int s=0;
 int e = n-1;

 while(s<e){
    swap(name[s++],name[e--]);
    // s++;
    // e--;
 }

}


int main(){
char name[]={"aatif"};
int n=5;
reverse(name,n);
for (int i = 0; i < n; i++) {
        cout << name[i];
    }
}