// Link: https://leetcode.com/problems/stone-game-ii/
class Solution {

    vector<int>v;
    int n;
    int dp[105][105];
    int fun(int i,int m){
        if(i==n)return 0;
        int& ret=dp[i][m];
        if(~ret)return ret;
        ret=-1e9;
        int sum=0,xn=min(2*m,n-i);
        for(int j=1;j<=xn;j++){
            sum+=v[i+j-1];
            ret=max(ret,sum-fun(i+j,max(m,j)));
        }
        return ret;
    }
public:
    int stoneGameII(vector<int>& piles) {
        n=piles.size();
        v=piles;
        for(int i=0;i<105;i++)
            for(int j=0;j<105;j++)dp[i][j]=-1;
        int sum=0;
        for(auto it:piles)sum+=it;
            return (sum+fun(0,1))/2;
    }
};
