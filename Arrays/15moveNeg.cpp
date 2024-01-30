//move all  the negative elements to one side of an array
#include<bits/stdc++.h>
using namespace std;
    void segregateElements(int arr[],int n)
    {
        vector<int>vec;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] >=0){
                vec.push_back(arr[i]);
            }
        }
        for(int i = 0 ; i < n ; i++){
            if(arr[i] < 0){
                vec.push_back(arr[i]);
            }
        }
        for(int i =0; i < n ; i++){
            arr[i]=vec.at(i);
        }
        
    }


int main(){
      int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
}
  segregateElements(arr,n);


  for(int i=0;i<n;i++){
      cout<<arr[i]<<" "<<endl;
  }
}