//merge2sortedarrays
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a1[n],a2[n];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    int i=n-1;
    int j=0;
    while(i>=0 && j<m){
        if(a1[i]>=a2[j]){
            swap(a1[i],a2[j]);
            else
                break;
            
            i++;
            j--;
            sort(a1+n);
            sort(a2+n);
        }
        }

    }
