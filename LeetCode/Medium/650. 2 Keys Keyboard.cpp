// Link: https://leetcode.com/problems/2-keys-keyboard/
class Solution {
public:
    int sz;
    long long dp[1005][1005];
    
    long long fun(int i,int clip){
        if(i==sz)return 0;
        if(i>sz) return 1e9;
        long long& ret=dp[i][clip];
        if(~ret)return ret;
        int op1=fun(i*2,i)+2;
        int op2=fun(i+clip,clip)+1;
        return (ret=min(op1,op2));
    }
    int minSteps(int n) {
        for(int i=0;i<1005;i++)
            for(int j=0;j<1005;j++)
                     dp[i][j]=-1;
        sz=n;
        if(sz==1)return 0;
        return fun(1,1)+1;
    }
};
