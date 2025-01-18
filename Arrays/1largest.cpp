/*program to find largest element in an array
I/P : arr[]={10,20,4}
O/P : 20  */

#include<iostream>
#include<limits.h>
using namespace std;

int largest (int arr[], int n){
     
     int max = INT_MIN;

     for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
     }
     return max;

}



int main(){
int n;
cout<<"enter the number of elements";
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
cin>>arr[i];
}
largest(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

}