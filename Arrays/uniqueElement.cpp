#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr){

    int ans =0;

    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
  
    int n;
    cout<<"Enter the size of elements";
    cin >> n;

    vector<int>arr(n);
    
    cout<<" Enter the number of elements";

    //taking input

    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int unique = findUnique(arr);

    cout<<unique<<endl;

    return 0;
}