//recursion from scratch
//code 28 - selectionSort sort

#include<iostream>
using namespace std;
void selectionSort(int input[],int beginIndex,int size){
    if(beginIndex>=size-1)
    return;
    int minIndex=beginIndex;
    for(int i=beginIndex;i<size;i++){
        if(input[i]<input[minIndex]){
        minIndex=i;
    }
    }
    swap(minIndex,beginIndex);
    selectionSort(input,beginIndex+1,size);
}


int main(){
    int arr[]={3,6,2,4,1};
    selectionSort(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
   
}

