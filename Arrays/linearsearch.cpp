#include<iostream>
using namespace std;


bool find(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
        return false;
}


int main(){
    int arr[]={1,3,4,5,6,7,9};
    int size=7;
    int key;
    cin>>key;
    if(find(arr,key,size)){
        cout<<"found"<<endl;
    }else{

    cout<<"not found"<<endl;
    }
  
}
