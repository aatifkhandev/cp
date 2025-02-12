//Pair
#include<iostream>
using namespace std;
int main(){


	// Pair class 
	//pair<int,int>pr = {1,2}; 
	pair<pair<int,int>, int> pr = {{1,2}, 7}; 
	cout<<pr.first.second<<endl;
	cout<<pr.second<<endl;
	



	// Pair class 
	pair<int,int> pr = {1,2}; 
	pair< pair<int,int>, int> pr = {{1,2}, 2}; 
	cout << pr.first.second << endl;
	pair<pair<int,int>, pair<int,int>> pr = {{1,2},{2, 4}};
	cout << pr.first.first; -> 1 
	cout << pr.second.second; -> 4 
 
	vector<pair<int,int>> vec; 
	set<pair<int,int>> st; 
	map< pair<int,int>, int> mpp; 
 
 
 
	multimap<string, int> mpp;
	mpp.emplace("abc", 2); 
	mpp.emplace("xyz", 5); 


 

}