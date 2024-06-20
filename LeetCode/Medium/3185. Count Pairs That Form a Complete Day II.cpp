// Link: https://leetcode.com/problems/count-pairs-that-form-a-complete-day-ii/
class Solution {
public:
    long long countCompleteDayPairs(vector<int>& ar) {
        map<long long,long long>mp;
      int  n=ar.size();
        long long sum=0;
    for(int i=0;i<n;i++)mp[ar[i]%24]++;
    for(int i=0;i<n;i++) {
        mp[ar[i]%24]--;
        if(mp.find((24-(ar[i]%24))%24)!=mp.end())
        sum+=(mp[(24-(ar[i]%24))%24]);
    }
   return sum;
    }
};
