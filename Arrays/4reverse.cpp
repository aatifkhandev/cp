 /*program to reverse an array 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

*/

#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a=b;
    b= temp;
}

void reverse(int arr[], int n){
    int st=0,end=n-1;
    while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}

int main(){
     int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  reverse(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}