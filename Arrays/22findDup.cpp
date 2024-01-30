//find duplicates in an array
#include<bits/stdc++.h>
using namespace std;

 int findDuplicate(vector<int>&nums) {
        int slow =nums[0];
        int fast = nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }

    int main(){
        int nums;
        cin>>nums;
        int arr[nums];
        for(int i=0;i<nums;i++){
          cin>>nums[i];
          findDuplicate(nums);


        }
    }