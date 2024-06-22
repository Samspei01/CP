// Link: https://leetcode.com/problems/count-number-of-nice-subarrays/

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0]=1;
        int ans=0,sum=0;
        for(auto it:nums){
            sum+=(it%2);
            if(sum-k>=0)ans+=mp[sum-k];
            mp[sum]++;
        }
        return ans;
    }
};
