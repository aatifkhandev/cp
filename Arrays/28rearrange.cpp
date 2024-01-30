#include<bits/stdc++.h>
using namespace std;

void rearrange(long long *arr, int n) {
	vector<int>ans;
    	
    	 int i=0,j=n-1;
    	 while(i<=j)
    	 {
    	     ans.push_back(arr[j]);
    	     ans.push_back(arr[i]);
    	     i++;
    	     j--;
    	 }
    	 for(int i=0;i<n;i++)
    	 arr[i]=ans[i];
    	 
    }
    int main(){
        int n;
        cin>>n;
       long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        rearrange(arr,n);

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" "<<endl;
        }
    }

   