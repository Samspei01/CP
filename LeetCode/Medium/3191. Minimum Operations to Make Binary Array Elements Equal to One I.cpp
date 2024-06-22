// Link: https://leetcode.com/problems/minimum-operations-to-make-binary-array-elements-equal-to-one-i/

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]==0){
                ans++;
                nums[i]^=1;
                nums[i+1]^=1;
                nums[i+2]^=1;
            }
        }
        bool ch=1;
        for(auto it:nums)ch&=it;
        return ch ? ans : -1;
    }
};
