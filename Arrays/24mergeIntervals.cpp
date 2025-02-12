//merge intervals
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
         // Code here

        vector<vector<int>> ans;
        if(intervals.size()==0)
        return ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        int j=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(ans[j][1]>=intervals[i][0])
                ans[j][1]=max(ans[j][1],intervals[i][1]);
            else
            {
                j++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
    int main(){
        int n;
        cin>>n;
        vector<vector<int>> intervals(n);
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            intervals[i].push_back(x);
            intervals[i].push_back(y);
        }
        vector<vector<int>> ans=overlappedInterval(intervals);
        for(auto i:ans){
            for(auto j:i){
           cout<<j<<endl;
            }
        }
        return 0;
    }
