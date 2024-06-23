// Link: https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/
class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int>st;
        int l=0,r=0,ans=0;
        while(r<nums.size()){
            st.insert(nums[r++]);
      while(*st.rbegin()-*st.begin()>limit)st.erase(st.find(nums[l++]));

        ans=max(ans,r-l);
        }
    return ans;
    }
};
