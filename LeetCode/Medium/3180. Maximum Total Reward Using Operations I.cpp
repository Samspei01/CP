// Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/
class Solution {
public:

    int dp[2005][4105];
    int n;
    vector<int>ar;
    int fun(int i,int sum)
    {
        if(i==n)return 0;
        int &ret=dp[i][sum];
        if(~ret)return ret;
        ret=fun(i+1,sum);
        if(ar[i]>sum)ret=max(ret,fun(i,sum+ar[i])+ar[i]);
        return ret;
    }
    int maxTotalReward(vector<int>& rewardValues) {
        ar=rewardValues;
        n=ar.size();
        sort(ar.begin(),ar.end());
        memset(dp,-1,sizeof(dp));
        return fun(0,0);
    }
};
