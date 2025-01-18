//sort an array of 0's 1's 2's
//given an array of size n containing only os 1s 2s sort the array in ascending order
//tc ->0(n log k) sc->0(1)
#include<bits/stdc++.h>
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
      int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
}
  sort012(a,n);


  for(int i=0;i<n;i++){
      cout<<a[i]<<" "<<endl;
  }
}