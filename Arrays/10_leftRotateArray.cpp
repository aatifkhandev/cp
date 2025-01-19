#include <iostream>
#include <algorithm>
using namespace std;

// Function to reverse the elements of an array within a given range [l, r]
void reverseArray(int arr[], int l, int r)
{
    while (l < r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

// Function to left rotate an array by k positions
void leftRotate(int arr[], int n, int k)
{
    // Reverse the first k elements
    reverseArray(arr, 0, k - 1);
    
    // Reverse the remaining n - k elements
    reverseArray(arr, k, n - 1);
    
    // Reverse the entire array
    reverseArray(arr, 0, n - 1);
}

// Main function
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    
    leftRotate(arr, n, k);
    
    cout << "Left rotated array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}