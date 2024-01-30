//arr[]={1,3,5,7,9}
//arr[]={1,1,1,1,1}

#include<bits/stdc++.h>
using namespace std;




int main(){

int arr[5]={1,3,5,7,9};

for(int i=0;i<=4;i++){
    
        if(arr[i]!=1){
            arr[i]=1;
        }
        
    }
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<endl;
    }
}

