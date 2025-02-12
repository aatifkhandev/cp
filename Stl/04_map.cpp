#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
int main(){

	map<string, int> mpp; 
	mpp["foo"] = 27; 
	mpp["bar"] = 31; 
	mpp["abc"] = 31;
	mpp["xyz"] = 67; 
	mpp["a"] = 89; 
	mpp["b"] = 29; 
	mpp.emplace("abc", 45); 
	mpp.erase("xyz"); // mpp.erase(key) 
	mpp.erase(mpp.begin()); // mpp.erase(iterator)
	mpp.clear(); // entire map is cleaned up
	mpp.erase(mpp.begin(), mpp.begin()+2); // cleans up a given range
	auto it = mpp.find("xyz"); // points to where raj lies 
	auto it = mpp.find("abc"); // points to end since she does not exists 
 
	if(mpp.empty()) {
		cout << "Yes it is empty"; 
	}
	mpp.count("abc"); // always returns 1 as it stores only 1 
	
 
	pair<int,int> pr;
	pr.first = 1; 
	pr.second = 10; 
 
	// printing map 
	for(auto it: mpp) {
		cout << it.first << " " << it.second << endl; 
	}
 
	for(auto it = mpp.begin(); it!=mpp.end();it++) {
		cout << it->first << " " << it->second << endl; 
	}
 
	// does not stores in any order 
	unordered_map<int,int> mpp; 
	// unordered_map<pair<int,int>,int> mpp; xxxxxx
	// o(1) in almost all cases
	// o(n) in the worst case, where n is the container size 

}