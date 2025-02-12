//size of pointers
#include<iostream>
using namespace std;
int main(){
    int i=10;
    int *p = &i;
    cout<<sizeof(p)<<endl;
     
     cout<<i<<endl;
     cout<<*p<<endl;

     i++;

  cout<<i<<endl;
     cout<<*p<<endl;
// changes will not reflect because both are pointing towards same and are same

/*int a=i;
a++;
cout<<a<<endl;
*/



int a=*p;
a++;
cout<<a<<endl;
cout<<*p<<endl;

i=12;
  cout<<i<<endl;
     cout<<*p<<endl;

*p=23;
  cout<<i<<endl;
     cout<<*p<<endl;

(*p)++;
  cout<<i<<endl;
     cout<<*p<<endl;


}