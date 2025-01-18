
#include<iostream>
#include<limits.h>
using namespace std;

void min(int arr[],int n){
    int minimum = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    
        
    }
    cout<<minimum<<endl;
}
void max(int arr[],int n){
    int maximum = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }
    cout<<maximum<<endl;
}

void rearrange(int arr[], int n){
    int i=0;
    while(arr[i]<n){
        min(arr,n);
        max(arr,n);
    }
}

int main(){
    int n = 4;
    int arr[]={1,2,3,4};
    rearrange(arr,n);
}