#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sort(int arr[], int n){
    int start = 0, end = n - 1;
    for(int i = 0; i <= end; ){
        if(arr[i] == 0){
            swap(arr[start], arr[i]);
            i++;
            start++;
        } else if(arr[i] == 1){
            swap(arr[i], arr[end]);
            end--;
        } else {
            i++; // Skip 2s if present in the array
        }
    }
}

int main(){
    int arr[] = {0, 1, 1, 0, 1, 0, 1, 0, 0};
    int n = 9;
    sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
