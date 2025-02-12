//find the intersection of two arrays
#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int doIntersection(int a[], int n, int b[], int m) {
    // Sort both arrays
    sort(a, a + n);
    sort(b, b + m);

    // Use two pointers to iterate through both arrays
    int i = 0, j = 0, k = 0;
    int c[n];  // Intersection array

    // Compare elements from both arrays
    while (i < n && j < m) {
        // If the element in the first array is smaller, move the pointer to the next element
        if (a[i] < b[j]) {
            i++;
        }
        // If the element in the second array is smaller, move the pointer to the next element
        else if (a[i] > b[j]) {
            j++;
        }
        // If both elements are equal, add it to the intersection array and increment both pointers
        else {
            c[k++] = a[i++];
            j++;
        }
    }

    // Return the size of the intersection array
    return k;
}

int main() {
    int a[] = {1, 2, 3, 4};
    int b[] = {2, 3, 5, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int size = doIntersection(a, n, b, m);
    cout << "The size of the intersection is: " << size << endl;
    return 0;
}



