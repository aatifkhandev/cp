//linearSearch
#include<iostream>
using namespace std;
int search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return -1;
}
                        
int main(){
    int arr[]={1,2,3,4,5};
    int key=7;
    int n=5;
     int ans=search(arr,n,key);
     cout<<"the answer is "<<ans<<endl;
}