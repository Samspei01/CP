// Link: https://codeforces.com/contest/988/problem/E

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
ll fun(string s,char d1,char d2)
{
    ll n=s.size();
    ll idx1=-1;
    for(int i=s.size()-1; i>=0; i--)
        if(s[i]==d2)
        {
            idx1=i;
            break;
        }

    if(idx1==-1)return 1e18;
    s.erase(idx1,1);
    ll idx2=-1;
    for(int i=s.size()-1; i>=0; i--)
        if(s[i]==d1)
        {
            idx2=i;
            break;
        }
    if(idx2==-1)return 1e18;
    ll z=0;
    s.erase(idx2,1);
    for(;z<n;z++)
    if(s[z]!='0')break;
    return (n-idx1-1)+((n-1)-idx2-1)+z;
}
void solve()
{
    string s;
    cin>>s;

    ll mn=1e18;

    mn=min(mn,fun(s,'0','0'));
    mn=min(mn,fun(s,'2','5'));
    mn=min(mn,fun(s,'5','0'));
    mn=min(mn,fun(s,'7','5'));
    if(mn==1e18)cout<<-1<<"\n";
    else cout<<mn<<"\n";



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
 
