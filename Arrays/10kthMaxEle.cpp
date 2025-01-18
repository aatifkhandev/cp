//kth max element
#include<bits/stdc++.h>
using namespace std;


int kSmallest(int arr[],int l,int r,int k){
priority_queue <int> maxHeap;
for(int i=l;i<=r;i++){
    maxHeap.push(arr[i]);
    if(maxHeap.size()>k){
        maxHeap.pop();
    }
}
return maxHeap.top();

}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    
     cout<<kSmallest(arr,0,n-1,k);
    
}

}