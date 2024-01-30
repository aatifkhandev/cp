//minimum no of jumps
#include<bits/stdc++.h>
using namespace std;
  int minJumps(int arr[], int n){
        // Your code here
        if(n==1) return 0;
        if (arr[0] ==0) return  -1;
        int des=0;
        int pos=0;
        int jump=0;
        
        for(int i=0; i<n-1; i++){
            des= max(des,arr[i]+i);
            if(pos ==i){
                pos = des;
                jump++;
            }
             if (pos ==i) return -1;
        }
         return jump;
    }

    int main(){
          int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
       int ans= minJumps(arr,n);
       cout<<ans<<endl;   
    }