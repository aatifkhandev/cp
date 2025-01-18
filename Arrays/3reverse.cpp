// reverse the  array
/*Input:  arr[] = {12, 13, 1, 10, 34, 1}
Output: {1,34,10,1,13,12}*/

#include<bits/stdc++.h>
using namespace std;


void reverse(int arr[], int n){
    int start=0,end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
int arr[]={1,2,3,4,5};
int n=5;
reverse(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}

}