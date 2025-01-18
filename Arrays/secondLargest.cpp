// get the second largest number of the array list.
// input :- a= [1,2,5,3,4,6,7,8];
// output :- 7;

#include<iostream>
#include<limits.h>
using namespace std;

int secondLargest(int arr[], int n){
    int max=INT_MAX;
    int second =-1;

    for(int i=0;i<n;i++){
        if(arr[i]<max && arr[i]>second){
            
        }
    }
   cout<<"second largest"<<secondLargest;
}


int main(){
int arr[]={1,2,3,4,5,6,7};
int n=7;
secondLargest(arr,n);

}