//recursion from scratch
//code 34 - print subset of an array

#include <iostream>
using namespace std;

int helper(int input[],int size,int output[],int m){
    if(size==0){
        for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
            }cout<<endl;
        return 1;
        }
    helper(input+1,size-1,output,m);
    int newOutput[m+1];
    for(int i=0;i<m;i++){
       newOutput[i]=output[i];
    }
newOutput[m]=input[0];
    helper(input+1,size-1,newOutput,m+1);
}


void printSubsetsOfArray(int input[], int size) {
	int m=0;
    int output[m];
    helper(input,size,output,m);
    
}

int main() {
  int input[10000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}
