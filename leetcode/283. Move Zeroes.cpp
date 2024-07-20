#include<bits/stdc++.h>
using namespace std;
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
            i++;
        }
    }