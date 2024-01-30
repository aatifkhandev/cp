//find factorial of a large number
#include<bits/stdc++.h>
using namespace std;
    vector<int> factorial(int N){
        // code here
        
        vector<int> ans;
        
        ans.push_back(1);
        for(int j = 2; j <= N; j++){
            
            int carry = 0;
            
            for(int i = 0; i < ans.size(); i++){
                
                int val = ans[i] * j + carry;
                ans[i] = val % 10;
                carry = val / 10;
                
            }
            
            while( carry != 0){
                
                ans.push_back(carry % 10);
                carry /= 10;
            }
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }

    int main(){
        int n;
        cin>>n;
        vector<int>ans=(factorial(n));
        for(int i=0;i<ans.size();++i){
            cout<<ans[i]<<endl;
        }
        cout<<endl;
        return 0;
    }