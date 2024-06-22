// Link: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-ii/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        bool flip=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(flip)nums[i]^=1;
            if(nums[i]==0)flip^=1,ans++,nums[i]=1;

        }
        bool ch=1;
        for(auto it:nums)ch&=it;
        return ch ? ans : -1;
    }
};
