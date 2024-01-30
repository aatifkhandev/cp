#include <bits/stdc++.h> //tc->0(N^2)
                         //sc->0(1)
using namespace std;

bool issorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;
}

int main(){
 
  int arr[] = {1, 2, 8, 4, 5}, n = 5;
 
//  sort(arr,arr+n);


//  for(int i=0;i<n;i++){
//   cout<<arr[i]<<endl;
//  }
  // bool ans = issorted(arr, n);
  // if (ans) cout << "True" << endl;
  // else cout << "False" << endl;
  // return 0;


}


