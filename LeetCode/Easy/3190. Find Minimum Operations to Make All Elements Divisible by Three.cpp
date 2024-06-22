// Link: https://leetcode.com/contest/biweekly-contest-133/problems/count-the-number-of-inversions/

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans=0;
        for(auto it:nums){
            ans+=(it%3!=0);
        }
        return ans;
    }
};
