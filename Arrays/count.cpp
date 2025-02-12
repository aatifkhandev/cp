#include<iostream>
using namespace std;

void count(int arr[],int n,int &zeroCount,int &oneCount){
     zeroCount=0;
     oneCount=0;
    for(int i=0;i<n;i++){
        
            if(arr[i]==0){
                zeroCount++;
            }
            if(arr[i]==1)
                oneCount++;
            }
        }
        
    
int main(){

int arr[]={0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1};
int n=23;
int zeroCount,oneCount;
count(arr,n,zeroCount,oneCount);
cout<<"no of zeros are"<<zeroCount<<endl;
cout<<"no of one's are "<<oneCount<<endl;
return 0;
}