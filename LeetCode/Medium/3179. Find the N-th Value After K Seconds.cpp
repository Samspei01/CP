// Link: https://leetcode.com/problems/find-the-n-th-value-after-k-seconds/
class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        
        int ar[n];
        for(int i=0;i<n;i++)ar[i]=1;
        int mod=1e9+7;
        for(int i=0;i<k;i++)
            for(int i=1;i<n;i++)ar[i]=(ar[i]%mod)+(ar[i-1]%mod),ar[i]%=mod;
        return ar[n-1]%mod;
    }
};
