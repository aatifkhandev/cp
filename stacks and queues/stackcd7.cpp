//inbuilt stack
#include <iostream>
using namespace std;

#include <stack>
#include <climits>

template <typename T>
class StackUsingArray {
	T *data;
	int nextIndex;
	int capacity;	

	public :

	StackUsingArray() {
		data = new T[4];
		nextIndex = 0;
		capacity = 4;
	}

	// return the number of elements present in my stack
	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		/*
		if(nextIndex == 0) {
			return true;
		}
		else {
			return false;
		}
		*/

		return nextIndex == 0;
	}

	// insert element
	void push(T element) {
		if(nextIndex == capacity) {
			T *newData = new T[2 * capacity];
			for(int i = 0; i < capacity; i++) {
				newData[i] = data[i];
			}
			capacity *= 2;
			delete [] data;
			data = newData;
			/*cout << "Stack full " << endl;
			return;*/
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	// delete element
	T pop() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return 0;	
		}
		nextIndex--;
		return data[nextIndex];
	}
	T top() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return 0;	
		}
		return data[nextIndex - 1];
	}
};

int main() {

	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);

	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	cout << s.size() << endl;
	cout << s.empty() << endl;

	/*
	StackUsingArray<char> s;
	s.push(100);
	s.push(101);
	s.push(102);
	s.push(103);
	s.push(104);


	cout << s.top() << endl;

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;

	cout << s.size() << endl;

	cout << s.isEmpty() << endl;
	*/
}

