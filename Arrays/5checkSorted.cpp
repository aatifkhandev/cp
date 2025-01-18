
/* check if array is sorted

i/p : arr[]={1,2,3,4,5}
o/p: true;

i/p : arr[]={1,2,6,4,5}
o/p: false;

*/
#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
 for(int i=1;i<n;i++){
    if(arr[i]<arr[i-1]){
        return false;
    }
    return true;
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
  int ans =sorted(arr,n);

  if(ans){
    cout<<"TRUE";
  }else{
    cout<<"FALSE";
  }

}