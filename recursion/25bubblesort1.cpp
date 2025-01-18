//recursion from scratch
//code 28 - bubble sort

#include<iostream>
using namespace std;
void bubbleSort(int input[],int n){
if(n==0|| n==1)
return;
for(int i=0;i<n-1;i++){
    if(input[i]>input[i+1]){
    swap(input[i],input[i+1]);
}
}

bubbleSort(input,n-1);
}
int main(){
    int arr[]={3,6,2,4,1};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
   
}

