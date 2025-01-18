//given three arrays sorted in ascending order find the elements that are common in three three ways
#include<bits/stdc++.h>
using namespace std;
 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int>v;
            int i=0,j=0,k=0;
            set<int>s;
            while(i<n1 &&j<n2 &&k<n3){
                if(A[i]==B[j] &&B[j]==C[k]){
                    s.insert(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<=B[j] && A[i]<=C[k])
                i++;
                else if(B[j]<=A[i] &&B[j]<=C[k])
                j++;
                else if(C[k]<=A[i]&&C[k]<=B[j])
                k++;
            }
            v.assign(s.begin(),s.end());
            return v;
        }
        int main(){
           int n1,n2,n3;
           cin>>n1>>n2>>n3;
           int a[n1],b[n2],c[n3];
        for(int i=0;i<n1;i++) cin>>a[n1];
        for(int i=0;i<n2;i++) cin>>b[n2];
        for(int i=0;i<n3;i++) cin>>c[n3];

        vector<int>ans=commonElements(a,b,c,n1,n2,n3);
       for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
       }
        }
        