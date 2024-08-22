// Link: https://leetcode.com/problems/number-complement/
class Solution {
public:
    int findComplement(int n) {
        if(n==1)return 0;
        int ans=0;
           for(int i=0;n;i++,n>>=1)
        ans+=(1-(n&1))<<i;
        return ans;
    }
};
