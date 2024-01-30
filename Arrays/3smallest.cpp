/*program to find smallest element in an array
I/P : arr[]={10,20,4}
O/P : 4  */

#include<iostream>
#include<limits.h>
using namespace std;

  void smallest(int arr[],int n){
  
   int min = INT_MAX;

   for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
    
   }
       cout << "The smallest element is: " << min << endl;

}


int main(){
int n;
cout<<"Enter the number of the elements"<<endl;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}
smallest(arr,n);


return 0;
}