#include<bits/stdc++.h>//here the tc is 0(N)
                         //sc is 0(1)
using namespace std;

int findLargestElement(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}

/*#include<bits/stdc++.h>//here the tc is 0(N*log n)
                         //sc is 0(N)
using namespace std;

int sortArr(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int main(){
     
vector<int>arr1={2,5,1,3,0};
vector<int>arr2={8,10,5,7,9};

cout<<"the largest element in the array is"<<sortArr(arr1)<<endl;
cout<<"the largest element in the array is"<<sortArr(arr2)<<endl;
return 0;
    }*/
    
