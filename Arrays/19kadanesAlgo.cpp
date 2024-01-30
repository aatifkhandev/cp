//kadanes algorithm
#include<bits/stdc++.h>
using namespace std;

  long long maxSubArraySum(int arr[], int n){
        
        // Your code here
         long long maxSum = INT_MIN , sum=0;
         for(int i=0;i<n;i++){
             sum=sum+arr[i];
             maxSum=max(maxSum,sum);
             if(sum<0){
                 sum=0;
             }
         }
         return maxSum;
    }
    int main(){
 int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
   int ans= maxSubArraySum(arr,n);
   cout<<ans<<endl;
   

    }