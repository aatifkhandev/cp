//check palindrome using recursion
#include<bits/stdc++.h>
using namespace std;

int isPalindrome( int i,string s)
	{
	 int start=0,end=s.size()-1;
	 while(start<end){
		if(s[start++]!=s[end--]){
			return false;
		}
	 }
	 return isPalindrome(i+1,s);
	}

int main(){
 string s;
 cin>>s;
 int ans= isPalindrome(0,s);
 if(ans){
	cout<<"palindrome";
 }
 else{
	cout<<"not a palindrome";
 }

return 0;
}









/*bool ispalindrome(int i,string &s){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!=s.size()-i-1){
        return false;
    }
    return ispalindrome(i+1,s);
}
int main(){
    string s="madam";
    cout<<ispalindrome(0,s);
    return 0;
   
}*/