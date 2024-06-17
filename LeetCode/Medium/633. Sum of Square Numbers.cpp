// Link: https://leetcode.com/problems/sum-of-square-numbers/
class Solution {
public:
    bool judgeSquareSum(int c) {


        int n=sqrt(c)+100;
        for(long long i=0;i<=n;i++){
            int low=0,high=n;
            while(low<=high){
                long long mid=(low+high)/2;
                long long num=mid*mid+i*i;
                if(num==(long long)c)return true;
                else if(num<c)low=mid+1;
                else high=mid-1;
            }


        }
            return false;
    }
};
