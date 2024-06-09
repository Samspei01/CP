// Link: https://leetcode.com/problems/find-the-child-who-has-the-ball-after-k-seconds/
class Solution {
public:
    int numberOfChild(int n, int k) {

            int f=k/(n-1);
            k%=(n-1);
            if(f%2==0)return k;
            else return n-k-1;
        
    }
};
