// Link: https://leetcode.com/problems/patching-array/

class Solution {
public:
    int minimumAddedCoins(vector<int>& nums, int n) {
        long long sum=0;
        int ans=0;
        sort(nums.begin(),nums.end());
        for(auto it:nums){
            while(sum+1<it&&sum<n)
            {

            sum+=sum+1;
            ans++;
            }
            sum+=it;
            if(sum>=n)return ans;
        }
    
    while(sum<n)sum+=sum+1,ans++;
    return ans;
    }
};
