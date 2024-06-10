// Link: https://codeforces.com/contest/988/problem/F

/*
                                                SAMSEPI0L
*/
//--------------------------------------------------------------------------------------------------------------------
/*
                                                   /|、
                                                  (˚ˎ 。7
                                                   |、˜〵
                                                  じしˍ,)ノ
*/
//--------------------------------------------------------------------------------------------------------------------
/*
ID: abdelrh16
TASK: Your Ride Is Here
LANG: C++
*/
#include <bits/stdc++.h>
#define samsepi0l ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
typedef long long ll ;
#define pi pair<ll,ll>
#define pii pair<ll,pair<ll,ll>>
#define F first
#define S second
#define all(x) x.begin(),x.end()
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
void file();
using namespace __gnu_pbds;
using namespace std;
const int N=2e3+5;
ll a,n,m;
ll rain[N];
ll umb[N];
ll oo=1e18;
ll dp[N][N][2];
ll fun(ll i,ll last,bool f)
{
    if(i==a)return 0;
    if(umb[i]==oo&&rain[i]&&f)return oo;
    ll& ret=dp[i][last][f];
    if(~ret)return ret;
    ret=oo;
    if(umb[i]!=oo)
        ret=min(ret,fun(i+1,i,0)+umb[i]);
    if(f==0)
        ret=min(ret,fun(i+1,last,0)+umb[last]);
    if(!rain[i])ret=min(ret,fun(i+1,last,1));
    return ret;
}
void solve()
{
    cin>>a>>n>>m;
    for(int i=0; i<n; i++)
    {
        ll l,r;
        cin>>l>>r;
        rain[l]++;
        rain[r]--;
    }
    for(int i=1; i<=a; i++)rain[i]+=rain[i-1];

    fill(umb,umb+N,oo);
    ll mn=oo;
    for(int i=0; i<m; i++)
    {
        ll x,p;
        cin>>x>>p;
        mn=min(mn,x);
        umb[x]=min(umb[x],p);
    }
    memset(dp,-1,sizeof dp);
    ll ans=fun(0,mn,1);
    ans>=oo ?cout<<-1 : cout<<ans;
}

int  main()
{
    samsepi0l;
    file();
    int _ = 1;
    //cin >> _;
    while (_--)
        solve();

    return 0;
}
void file()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif // ONLINE_JUDGE

}
/*

*/
 
