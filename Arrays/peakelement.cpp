/*Input: 
N = 3
arr[] = {1,2,3}
Possible Answer: 2
Generated Output: 1
Explanation: index 2 is 3.
It is the peak element as it is 
greater than its neighbour 2.
If 2 is returned then the generated output will be 1 else 0.*/

#include<bits/stdc++.h>
using namespace std;
int peak (int arr[],int n){
    int max = INT_MIN, index;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    return index;

}


int main(){

    int arr[]={1,2,3};
    int n=3;
     int ans =peak(arr,n);
     cout<<ans<<endl;

}