// Link: https://leetcode.com/problems/strange-printer/
class Solution {
public:
    int dp[105][105];
    string t;
    int fun(int i, int j){
        if(i>j)return 0;
        int &ret=dp[i][j];
        if(~ret)return ret;
        ret=fun(i+1,j)+1;
        for(int k=i+1;k<=j;k++){
            if(t[i]==t[k])
            ret=min(ret,fun(k+1,j)+fun(i,k-1));
        }
        return ret;
    }
    int strangePrinter(string s) {
     t=s;
     for(int i=0;i<105;i++)
        for(int j=0;j<105;j++)
            dp[i][j]=-1;

    return fun(0,s.size()-1);   
    }
};
