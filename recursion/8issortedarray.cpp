//recursion from scratch
//code 8 - is sorted array

#include<iostream> 
using namespace std;
bool issorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = issorted(arr+1,size-1);
        return remainingPart;
    }
}

int main(){
    int arr[5]={1,4,6,8,9};
    int size(5);
    bool ans = issorted(arr,size);
    if(ans){
        cout<<"array is sorted";

    }else{
        cout<<"not relly sorted";
    }
    return 0;
}