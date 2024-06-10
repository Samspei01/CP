// Link: https://codeforces.com/contest/598/problem/E

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
const int N=35;
ll n,m,k;
ll oo=1e18;
ll dp[N][N][N+20];
bool vis[N][N][N+20];
ll idx=1;
ll fun(ll h,ll v,ll rem)
{
    if(rem<0||rem>n*m)return oo;
    if(h*v==rem||rem==0)return 0;
    ll& ret=dp[h][v][rem];
    if(vis[h][v][rem])return ret;

    vis[h][v][rem]=1;
    ret=oo;
    for(int i=1; i<h; i++)
    {
        ret=min(ret,fun(i,v,rem-(h-i)*v)+(v*v));
        ret=min(ret,fun(i,v,rem)+(v*v));
    }
    for(int i=1; i<v; i++)
    {
        ret=min(ret,fun(h,i,rem-(v-i)*h)+(h*h));
        ret=min(ret,fun(h,i,rem)+(h*h));
    }
    return ret;
}
void solve()
{
    cin>>n>>m>>k;
    //memset(dp,-1,sizeof dp);
    cout<<fun(n,m,k)<<"\n";
    idx++;
}

int  main()
{
    samsepi0l;
    file();
    int _ = 1;
    cin >> _;
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
 
