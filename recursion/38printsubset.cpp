//recursion from scratch
//code 34 - print subset sum to k

#include <iostream>
using namespace std;

int helper(int input[],int size,int k,int output[],int m){
    if(size==0){
        if(k==0){
        for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
            }cout<<endl;}
        return 1;
        }
        int newOutput[m+1];
        for(int i=0;i<m;i++){
            newOutput[i]=output[i];
        }
    
        
newOutput[m]=input[0];
    helper(input+1,size-1,k-input[0],newOutput,m+1);
          helper(input+1,size-1,k,output,m);
}




void printSubsetSumToK(int input[], int size, int k) {
    	int m=0;
    int output[m];
    helper(input,size,k,output,m);
    
}


int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
