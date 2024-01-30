/*Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Output: Sum found between indexes 2 and 4
Explanation: Sum of elements between indices 2 and 4 is 20 + 3 + 10 = 33*/


/* A simple program to print subArray
with sum as given sum */
#include <bits/stdc++.h>
using namespace std;
 
/* Returns true if the there is a subArray
of arr[] with sum equal to 'sum' otherwise
returns false. Also, prints the result */
void subArraySum(int arr[], int n, int sum)
{
 
    // Pick a starting point
    for (int i = 0; i < n; i++) {
        int currentSum = arr[i];
 
        if (currentSum == sum) {
            cout << "Sum found at indexes " << i << endl;
            return;
        }
        else {
            // Try all subArrays starting with 'i'
            for (int j = i + 1; j < n; j++) {
                currentSum += arr[j];
 
                if (currentSum == sum) {
                    cout << "Sum found between indexes "
                         << i << " and " << j << endl;
                    return;
                }
            }
        }
    }
    cout << "No subArray found";
    return;
}
 
// Driver Code
int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, n, sum);
    return 0;
}


