//reverse the array
#include <iostream>
using namespace std;
void reverse(int a[],int start,int end)
{
    if(start>=end)
        return;
    swap(a[start++],a[end--]);
    reverse(a,start,end);
}
int main()
{
    int a[]{1,2,3,4,5};
    int start =0;
    int end = 4;
    reverse(a,start,end);
    for(int i =0;i<5;++i)
        cout<<a[i]<<" ";
}
    






/*#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){
     if(start>=end){
        return;
     
        swap(arr[start++],arr[end--]);
       reverse(arr,start+1,end-1);
     }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];


}
reverse(arr,0,n-1);
}*/