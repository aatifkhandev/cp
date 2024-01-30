//shuffle string
#include<bits/stdc++.h>
using namespace std;
string restoreString(string s, vector<int>& indices) {
        
 
        
        for(int i=0;i<indices.size();i++)
        {
            
              while(indices[i]!=i)
              {
                  swap(s[i],s[indices[i]]);
                  swap(indices[i],indices[indices[i]]);
                       
              }
        }
        
       
        return s;
    }
    int main(){
        string s;
        cin>>s;
        vector<int>indices;
        for(int i=0;i<indices.size();i++){
            cin>>indices[i];
        }
        restoreString(s,indices);
    }