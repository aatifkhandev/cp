//recursion from scratch
//code 8 - sum array

#include<iostream> 
using namespace std;

int getSum(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];        //arr[0];
    }
         int ans =getSum(arr+1,size-1);
         return arr[0]+ans;
}






int main(){
    int arr[5]={11,1,2,2,2};
    int size=5;
    int ans = getsum(arr,size);
    cout<<ans<<endl;
}