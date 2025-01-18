//print duplicates
#include<bits/stdc++.h>
#include<map>
using namespace std;

void printDups(string str){
unordered_map<char,int>count;
for (int i = 0; i < str.length(); i++) {
        // increase the count of character str[i] by 1
        count[str[i]]++;
    }
    for(auto x:count){
        if(x.second>1){
             cout << x.first<< ", count = " << x.second
                 << "\n"; 
        }
    }
}


int main(){
string str ="aabbcc";
printDups(str);

}