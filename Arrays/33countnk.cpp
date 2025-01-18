//count more than n/k occurrences
#include<bits/stdc++.h>
using namespace std;

int countOccurrence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int, int> m;
        int x = n/k, count = 0;
        for(int i = 0; i < n; i++){
            m[arr[i]] += 1;
            if(m[arr[i]] > x){
                count += 1;
                m[arr[i]] = -1000;
            }
        }
        
        
        return count;
    }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        int k;
        cin>>k; 
    
   int ans= countOccurence(arr,n,k);
   cout<<ans<<endl;
    }
}

