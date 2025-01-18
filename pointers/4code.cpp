
//characters and pointers
#include<iostream>
using namespace std;
int main(){


char b[]= "xyz";
char *c = &b[0];
c++;
cout << b[1]<<endl;
}