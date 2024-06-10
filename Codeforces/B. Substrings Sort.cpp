// Link: https://codeforces.com/contest/988/problem/B

#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll;
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
bool compo(string s1,string s2)
{
return s1.size()<s2.size();
}
void solve()
{
    ll n;
    cin>>n;
    vector<string>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(),v.end(),compo);
    for(int i=0; i<n-1; i++)
    {
        if(v[i+1].find(v[i])==-1)
        {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    for(auto it:v)cout<<it<<"\n";
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
