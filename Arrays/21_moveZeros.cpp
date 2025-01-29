//i/p : arr = [1,0,2,0,3,0,4,0,5,0]
//o/p : [1,2,3,4,5,0,0,0,0,0]

#include<iostream>
using namespace std;

void moveZeros(int arr[], int n){
 
 int temp[n];
 int nz = 0;

 for(int i=0;i<n;i++){
    if(arr[i]!=0){
        temp[nz] = arr[i];
        nz++;
    }
 }



 for(int i=0;i<nz;i++){
    
        arr[i] = temp[i];
    }
 
 for(int i=nz;i<n;i++){
    arr[i] = 0;
 }


}


int main(){
int arr[]={1,0,2,0,3,0,4,0,5,0};
int n=10;
moveZeros(arr,n);

for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}