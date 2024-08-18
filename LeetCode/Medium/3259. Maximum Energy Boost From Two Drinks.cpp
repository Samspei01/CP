// Link: https://leetcode.com/problems/maximum-energy-boost-from-two-drinks/
using ll=long long;
const int N=1e5+5;
class Solution {
public:

ll n;
vector<int>a,b;
ll dp[N][2];
ll fun(ll i,bool sw) {
    if(i==n)return 0;
    ll& ret=dp[i][sw];
    if(~ret)return ret;
    ret=0;
    if(sw==0) {
        ret=max(ret,fun(i+1,sw)+a[i]);
        ret=max(ret,fun(i+1,sw^1));
    }
    else {
        ret=max(ret,fun(i+1,sw)+b[i]);
        ret=max(ret,fun(i+1,sw^1));
    }
    return ret;
}
long long maxEnergyBoost(vector<int>&eA,vector<int>&eB) {
        
    for(int i=0;i<N;i++) {
        dp[i][0]=-1;
        dp[i][1]=-1;
    }
    a=eA;
    b=eB;
    n=a.size();
    return max(fun(0,0),fun(0,1));

    
    }
};
