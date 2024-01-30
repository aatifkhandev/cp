#include<iostream>
using namespace std;

bool Prime(int n) {
    if (n < 2) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return false; // n is divisible by i, so it's not a prime number
        }
    }

    return true;
}

int main() {
    int n = 50;
    cout << "Prime numbers up to " << n << ": ";

    for (int i = 2; i <= n; i++) {
        if (Prime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
