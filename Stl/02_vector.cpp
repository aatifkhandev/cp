#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){


vector<int> arr;
cout<<arr.size()<<endl;

arr.push_back(0);
arr.push_back(2);
cout<<arr.size()<<endl;

arr.pop_back();
cout<<arr.size()<<endl;

arr.push_back(0);
arr.push_back(2);
//vector.clear();
arr.clear();



vector<int> vec1(4,0);
vector<int>vec2(4,10);

copy the entire vec2 into vec3
vector<int>vec3(vec2.begin(),vec2.end());
vector<int>vec3(vec2);



vector<vector<int>> vec; 
 
	vector<int> aatif;
	aatif.push_back(1); 
	aatif.push_back(2); 
 
	vector<int> aatif2;
	aatif2.push_back(10); 
	aatif2.push_back(20); 
 
	vector<int> aatif3;
	aatif3.push_back(19); 
	aatif3.push_back(24); 
	aatif3.push_back(27); 
 
	vec.push_back(aatif); 
	vec.push_back(aatif2); 
	vec.push_back(aatif3); 
 
	// it is vector itself 
	for(auto vector: vec) {
		for(auto it: vector) {
			cout << it << " "; 
		}
		cout << endl; 
	}
 
 
	for(int i = 0;i<vec.size();i++) {
		for(int j = 0;j<vec[i].size();j++) {
			cout <<  vec[i][j] << " "; 
		}
		cout << endl; 
	}
 
	// define 10 x 20 
	vector<vector<int>> vec(10, vector<int> (20, 0)); 
	vec.push_back(vector<int>(20, 0)); 
	cout << vec.size() << endl; // 11 prints
 
	vec[2].push_back(1); 
 
 
	vector<int> arr[4]; 
	arr[1].push_back(0); 
 
 
	// 10 x 20 x 30 // int arr[10][20][30] 
	vector<vector<vector<int>>> vec(10, vector<vector<int>> vec(20, vector<int> (30, 0)));
 


}