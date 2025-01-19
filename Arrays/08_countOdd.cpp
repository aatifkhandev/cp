
#include <iostream>
using namespace std;

int count(int arr[],int n){
    int oddCount=0;
    int evenCount=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
        
    }
    cout<<"No of Even elements"<<evenCount;
        cout<<"No of Odd elements"<<oddCount;
}

int main() {
    
int arr[]={2,3,4,5,6,7,8};
int n=7;
count(arr,n);

    return 0;
}