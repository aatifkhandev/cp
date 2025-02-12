//check whether a string is a palindrome or not
#include<bits/stdc++.h>
using namespace std;

	int isPalindrome(string s)
	{
	 int start=0,end=s.size()-1;
	 while(start<end){
		if(s[start]!=s[end]){
			return false;
		}
		start++;
		end--;
	 }
	 return true;
	}

int main(){
 string s;
 cin>>s;
 int ans= isPalindrome(s);
 if(ans){
	cout<<"palindrome";
 }
 else{
	cout<<"not a palindrome";
 }

return 0;
}