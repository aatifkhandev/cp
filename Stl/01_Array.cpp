//Array STL
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
array<int,5>arr;
arr.fill(10); //-> it will fill the entire array with the given element
for(auto it=arr.begin();it!=arr.end();it++){
    cout<<*it<<endl;   //->for normal iterating
    
}
array<int,5>arr={1,3,4,5,6};
for(auto it = arr.rbegin();it!=arr.rend();it++){
    cout<<*it<<" ";
}

	for(auto it= arr.end() - 1; it>=arr.begin();it--) {
		cout << *it << " "; 
	}
//for each loop
array<int,5>arr={1,3,4,5,6};
for(auto it : arr){
    cout<<it<<endl;
}
//for iterating in string
string s="aatif";
for(auto c:s){
    cout<<c<<endl;
}
//for printing size
cout<<arr.size()<<endl;

//front
cout<<arr.front()<<endl;//alternative ->arr.at();

//back
cout<<arr.back()<<endl;//arr.at(arr.size()-1);

}