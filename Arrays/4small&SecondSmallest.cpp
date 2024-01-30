// Find the smallest and second smallest elements in an array
/*Input:  arr[] = {12, 13, 1, 10, 34, 1}
Output: The smallest element is 1 and 
        second Smallest element is 10*/

#include<bits/stdc++.h>
using namespace std;
int main() {
int arr[]={111, 13, 25, 9, 34, 1};
int n=6;
// sort(arr,arr+n);

// cout<<"smallest element is "<<arr[0]<<endl;
// cout<<"second smallest element is "<<arr[1]<<endl;

int small = INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<small){
        small =arr[i];
    }

}
 cout<<"small element is "<<small<<endl;


int secondSmall = INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<secondSmall && arr[i]>small){
     secondSmall=arr[i];
    }
}
   cout<<"second small is "<<secondSmall<<endl;

}