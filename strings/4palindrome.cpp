//palindrome
#include<bits/stdc++.h>
using namespace std;


bool palindrome( char pal[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(pal[start]!=pal[end]){
            return false;
        }else{
            start++;
            end--;
        }
    }
    return true;
}



int main(){
    char pal[]="otoototoot";
    int n= 5;
    if(palindrome(pal,n)){
        cout<<"palindrome";
    }else{
        cout<<"not a palindrome ";
    }

}