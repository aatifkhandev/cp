/*Program to find sum of elements in a given array
Input : arr[] = {1, 2, 3}
Output : 6
Explanation: 1 + 2 + 3 = 6  */

#include<iostream>
using namespace std;


int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}



int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

int ans = sum(arr,n);

cout<<ans<<endl;

   
}