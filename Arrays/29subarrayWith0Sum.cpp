//subarray with 0 sum
#include<bits/stdc++.h>
using namespace std;

  bool subArrayExists(int arr[], int n)
    {
        unordered_set<int>st;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
         if( (sum==0) || (st.find(sum)!=st.end()) || (arr[0]==0))

            return true;
            st.insert(sum);
            }
                 

        return false;
    }

    int main(){
       int n;
        cin>>n;
       int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        if(subArrayExists(arr,n)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
        return 0;
 
    }