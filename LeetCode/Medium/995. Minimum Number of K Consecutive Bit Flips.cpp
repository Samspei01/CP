// Link: https://leetcode.com/problems/minimum-number-of-k-consecutive-bit-flips/

class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int f=0,ans=0;
        vector<int>vis(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(i>=k)f^=vis[i-k];
            if(f==nums[i]){
                if(i+k>nums.size())return -1;
                vis[i]=1;
                f^=1;
                ans++;
            }
        }
        return ans;
    }
};
