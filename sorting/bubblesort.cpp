#include<iostream>
using namespace std;
 
 void swap(int &a , int &b){
    int temp =a;
    a=b;
    b=temp;
 }

 void bubbleSort()



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

