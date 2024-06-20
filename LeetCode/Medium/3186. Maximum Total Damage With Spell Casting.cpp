// Link: https://leetcode.com/problems/maximum-total-damage-with-spell-casting/
class Solution {
public:
long long dp[100000+5];
map<long long,long long>mp;
vector<long long>v;
long long fun(long long i){
    if(i==v.size())return 0;
    long long& ret=dp[i];
    if(~ret)return ret;
    ret=fun(i+1);
    long long j=i+1;
    for(;j<v.size()&&v[j]-v[i]<=2;j++);
   ret=max(ret,fun(j)+mp[v[i]]*v[i]);
    return ret;
}
long long maximumTotalDamage(vector<int>& power) {

for(int i=0;i<100000+5;i++)dp[i]=-1;
for(auto it:power)mp[it]++;
for(auto it:mp)v.push_back(it.first);
    
    return fun(0);


}
    };
/*
3 4 4 5 5 5 6 6

5 3 
6 2
4 2
3 1

3 4 5 6

op 1 take it and make sure diff of next bigger than 2
op 2 leave it like everyone 
*/
