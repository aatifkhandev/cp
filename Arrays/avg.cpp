// Program for average of an array (Iterative and Recursive)
// Input : arr[] = {1, 2, 3, 4, 5}
// Output : 3
// Sum of the elements is 1+2+3+4+5 = 15 
// and total number of elements is 5.
// So average is 15/5 = 3

#include<iostream>
using namespace std;

int avg(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
int ans =sum/n;
return ans;
}


int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
  cout<<  avg(arr,n);

}