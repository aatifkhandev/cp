//triplet sum
#include<bits/stdc++.h>
using namespace std;
 bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
       int j,k;
       for(int i=0;i<n;i++)
       {
           j=i+1;
           k=n-1;
           while(j<k)
           {
               if(A[i] + A[j] + A[k] == X){
                   return true; 
                   
               }
               else if(A[i] + A[j] + A[k] > X)
               {
                   k--;
               }
               else if(A[i] + A[j] + A[k] < X) {
                   j++; 
                   
               }
           }
           
       }
       return false;
   
    }

    int main(){
    int n,X;
    cin>>n>>X;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i]; 
    
   cout<<find3Numbers(A,n,X)<<endl;
  
    }
}
