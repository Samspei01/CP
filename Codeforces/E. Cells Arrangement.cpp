// Link: https://codeforces.com/contest/1968/problem/E

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
void solve()
{
ll n;
cin>>n;
if(n==1)
{
    cout<<1<<" "<<1<<"\n";
    cout<<"\n";
    return;
    }
    if(n==2)
{
    cout<<1<<" "<<1<<"\n";
    cout<<1<<" "<<2<<"\n";
    cout<<"\n";
    return;
    }
        cout<<1<<" "<<1<<"\n";
    cout<<1<<" "<<2<<"\n";
for(int i=3;i<=n;i++)cout<<i<<" "<<i<<"\n";
cout<<"\n";
}



int  main()
{
    samsepi0l;
    //file();
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
