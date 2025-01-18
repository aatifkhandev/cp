//print duplicates in the input string
#include<bits/stdc++.h>
using namespace std;

void printdups(string str){
   unordered_map<char,int> count;
    for(int i=0;i<str.length();++i){
        count[str[i]]++;  //increase the count of cahracters by 1
    }
    for(auto it :count){
        if(it.second>1){ //if there exist any frequency > 1 print character and frequency
            cout<<it.first<<" , count "<<it.second<<" "<<endl;
//iterating through the unordered map if the count of characters is greater than 1 then duplicate found
        }
    }

}
int main(){
    string str="aatif";
    printdups(str);
    return 0;
}