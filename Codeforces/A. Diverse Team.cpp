// Link: https://codeforces.com/contest/988/problem/A

#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
void solve()
{
ll n,k;
cin>>n>>k;
unordered_map<ll,ll>mp;
ll x;
for(int i=0;i<n;i++)cin>>x,mp[x]=i;
if(mp.size()<k)cout<<"NO";
else{cout<<"YES"<<"\n";for(auto it:mp)if(k>0)cout<<it.second+1<<" ",k--;else break;}
}

int main()
{
    FIO;
    ll q = 1;
    //cin >> q;
    while (q--)
        solve();
    return 0;
}

/*
1 2 4 3 5 6 8 7 9 10

*/
