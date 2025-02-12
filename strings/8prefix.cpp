//prefix of a string
#include <iostream>
using namespace std;
#include <cstring>


void printAllPrefixes(char input[]) {
	// i represents end index of my prefix
	for(int i = 0; input[i] != '\0'; i++) {
			// j represents start index of my prefix
		for(int j = 0; j <= i; j++) {
			cout << input[j];
		}
		cout << endl;
	}
}

int main() {
	char input1[100] = "abcd";
	printAllPrefixes(input1);

}