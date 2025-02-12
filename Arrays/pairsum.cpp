#include<iostream>
#include<vector>
using namespace std;

int pairsum(vector<int>arr,int targetsum){
    int count =0;
    for(int i=0;i<arr.size();i++){
  for(int j=i+1;j<arr.size();j++){
    if(arr[i]+arr[j]==targetsum){
        cout<<arr[i]<<" "<<arr[j]<<endl;
        count++;
    }
  }
    }
    return count;
}




int main(){

    vector<int>arr={1,3,5,7,2,4,6};

    
 int targetsum = 9;

 int sol = pairsum(arr,targetsum);

 cout<<sol<<endl;
}