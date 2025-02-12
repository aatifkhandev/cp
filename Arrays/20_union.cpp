//find the union of two arrays
#include<bits/stdc++.h>
using namespace std;

int doUnion(int a[],int n,int b[],int m){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }

    for(int i=0;i<m;i++){
        s.insert(a[i]);
    }
    return s.size();
}

int main(){
          int n,m;
    cin>>n>>m;
    int a[n] ,b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
}

   for(int i=0;i<m;i++){
        cin>>b[i];
}
  doUnion(a,n,b,n);


  for(int i=0;i<n;i++){
      cout<<a[i]<<" "<<endl;
  }
}
