//sort 0 ,1,2
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

    void swap(int &x,int &y){
        int temp=x;
        x=y;
        y=temp;
    }
    void sort012(int a[], int n)
    {
        int l=0,h=n-1,m=0;
        while(m<=h){
            if(a[m]==0){
                swap(a[m],a[l]);
                l++;
                m++;
            }else if(a[m]==1){
                m++;
            }else{
                swap(a[m],a[h]);
                h--;
            }
        }
    }
    int main(){
   /*int a[]={0,2,1,2,0};
   int n=5;

sort012(a,n);
for(int i=0;i<n;i++){
    cout<<a[i];
}
    }*/


int t;
cin>>t;
while(t--){
int n;
    cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
       sort012(a,n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" " <<endl;
        }
        
        }
        return 0;
    }