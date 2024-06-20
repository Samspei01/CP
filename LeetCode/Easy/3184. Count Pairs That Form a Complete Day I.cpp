// Link: https://leetcode.com/problems/count-pairs-that-form-a-complete-day-i/
class Solution {
public:
    int countCompleteDayPairs(vector<int>& h) {
        int ans=0;
     for(int i=0;i<h.size();i++){
        for(int j=0;j<i;j++)
        if((h[i]+h[j])%24==0)ans++;
     }   
    return ans;
    }
};
