#include<bits/stdc++.h>
using namespace std;

int swap(int &start , int &end){
    int temp = start;
      start= end;
 end = temp;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    
    int start =0;

    int end = n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
  return 0;
}