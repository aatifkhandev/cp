#include <iostream>
#include <vector>
using namespace std;

// Rearranges the input array such that it contains alternate positive and negative numbers
void rearrange_array(vector<int> &arr) {
    int n = arr.size(); // size of the input array

    int positive = 1; // start with the next positive number
    int negative = 0; // start with the first negative number

    // Continue until both pointers reach the end of the array
    while (positive < n && negative < n) {
        // Find the next positive number
        while (positive < n && arr[positive] >= 0) {
            positive += 2;
        }
        // Find the next negative number
        while (negative < n && arr[negative] < 0) {
            negative += 2;
        }

        // If both pointers are within the bounds of the array, swap them
        if (positive < n && negative < n) {
            swap(arr[positive], arr[negative]);
        }
    }
}

int main() {
    vector<int> arr = {-1, 2, -3, 4, 5, -6, 7, -8};
    rearrange_array(arr);

    // Print the rearranged array
    for (int x : arr) {
        cout << x << " ";
    }
   cout << endl;

    return 0;
}