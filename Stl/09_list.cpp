//list
#include<iostream>
using namespace std;
#include<list>
int main(){

//list

list<int> ls; 
	// push_front() 
	// push_back() 
	// pop_front() 
	// pop_back()
	// begin, end, rbegin, rend 
	// size 
	// clear
	// empty 
	// at 
	// remove -> O(1) 
	ls.push_front(1); 
	ls.push_front(2); 
	ls.push_front(3);
	ls.remove(2); // o(1) operation
	for(auto it:ls){
		cout<<it<<endl;
	} 
 


}
