// Link : https://leetcode.com/problems/grumpy-bookstore-owner/
class Solution {
public:
int maxSatisfied(vector<int>& customers, vector<int>& grumpy,int minutes) {
        int num=0,mx=0,idx=0;
        for(int i=0;i<grumpy.size();i++){

        num+=((grumpy[i])) ? customers[i] : 0;
        if(i>=minutes){
        num-=(grumpy[idx]) ? customers[idx] : 0;
        idx++;

        }

        mx=max(mx,num);
        }
        for(int i=0;i<grumpy.size();i++)mx+=(!grumpy[i])  ?  customers[i] : 0;
        return mx;
    }
};
/*
One day we'll all be dead and none of This will matter
*/
