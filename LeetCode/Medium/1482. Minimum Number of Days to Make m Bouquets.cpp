// Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/
class Solution {
public:
#define ll long long
    int minDays(vector<int>& v, int m, int k) {

     ll low=0,high=1e9,ans=-1;
     while(low<=high){
     ll boc=0,flow=0;
        ll mid=(low+high)/2;
        for(auto it:v)
        {           
        if(it<=mid)
            flow++;
        else flow=0;
        if(flow==k)boc++,flow=0;

        }
        if(boc>=m)high=mid-1,ans=mid;
        else low=mid+1;
    
     }
     return ans; 
    }
};
/*
bloomDay = [7,7,7,7,12,7,7], m = 2, k = 3
test 7:
7 7 7 bouquets
* 7 7 xxxxx 
test 12:
7 7 7  bouquets
12 7 7 bouquets
take 12 days for take adj flowers and make bouquets for my Gf 
wait a minute!, idon't have a Gf
*/
