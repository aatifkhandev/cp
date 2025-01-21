#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

void rearrange_array(vector<int> &arr) {
    // sort the array in ascending order
    sort(arr.begin(), arr.end());

    // separate positive and negative numbers
    vector<int> positive, negative;
    for (int i : arr) {
        if (i >= 0) {
            positive.push_back(i);
        } else {
            negative.push_back(i);
        }
    }

    // interleave the positive and negative numbers
    int pos = 0, neg = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0) {
            if (neg < negative.size()) {
                arr[i] = negative[neg++];
            } else {
                arr[i] = positive[pos++];
            }
        } else {
            if (pos < positive.size()) {
                arr[i] = positive[pos++];
            } else {
                arr[i] = negative[neg++];
            }
        }
    }
}

int main() {
    vector<int> arr = {-1, 2, -3, 4, 5, -6, 7, -8};
    rearrange_array(arr);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}