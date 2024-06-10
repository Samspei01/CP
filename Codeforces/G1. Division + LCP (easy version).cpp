//Link: https://codeforces.com/contest/1968/problem/G1

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
string s;
const int N=2e5+5,p1=29,p2=31,mod1=1e9+7,mod2=1e9+9;
vector<pair<ll,ll>>shhh;
vector<ll>inv1,inv2;
ll n;
ll add(ll a,ll b,ll mod)
{

    return (a+b)>=mod ? (a+b)-mod : (a+b);
}

ll sub(ll a,ll b,ll mod)
{
return ((a - b) % mod + mod) % mod;
}
ll mul(ll a,ll b,ll mod)
{
    return 1LL * a * b % mod;
}
ll fast_pow(ll a,ll b,ll mod)
{
    ll ans=1;
    for(;b;b/=2)
    {
        if(b&1)ans=mul(ans,a,mod);
        a=mul(a,a,mod);
    }
    return ans;
}
vector<pair<ll,ll>>compute_hash(string &s)
{
    ll h1=0,h2=0,v1=1,v2=1;
    vector<pair<ll,ll>>ans;
    ans.push_back({0,0});
    for(int j=0;j<(int)s.size();j++)
    {
        ll v=s[j]-'a'+1;

        h1=add(h1,mul(v,v1,mod1),mod1);
        h2=add(h2,mul(v,v2,mod2),mod2);

        ans.push_back({h1,h2});
        v1=mul(v1,p1,mod1);
        v2=mul(v2,p2,mod2);
    }
    return ans;
}
pair<ll,ll>find_lr(ll l,ll r)
{
ll h1,h2;
    tie(h1,h2)=shhh[r];
    if(l>0)
    {
    ll l1,l2;
       tie(l1,l2)=shhh[l-1];
        h1=sub(h1,l1,mod1);
        h1=mul(h1,inv1[l],mod1);

        h2=sub(h2,l2,mod2);

        h2=mul(h2,inv2[l],mod2);

    }
    return {h1,h2};
}
void prepare()
{
    inv1=vector<ll>(n+1);
    inv2=vector<ll>(n+1);
    inv1[n]=fast_pow(fast_pow(p1,n,mod1),mod1-2,mod1);
    for(int i=n-1; i>=0; i--)
        inv1[i]=mul(inv1[i+1],p1,mod1);

    inv2[n]=fast_pow(fast_pow(p2,n,mod2),mod2-2,mod2);
    for(int i=n-1; i>=0; i--)
        inv2[i]=mul(inv2[i+1],p2,mod2);


}
void solve()
{
    ll k;
    cin>>n>>k>>k;
    prepare();
    cin>>s;
    vector<ll>memo(n+5,-1);
    shhh=compute_hash(s);
    ll low=0,high=n+1,mid,ans=-1;
    while(high-low>1)
    {
        mid=(high+low)/2;
        ll cnt=1;
        if(~memo[mid])
            cnt=memo[mid];
        else
        {
            pi pre=find_lr(1,mid);
            ll lp=mid+1;
            ll rp=lp+mid-1;
            while(rp<=n)
            {
                pi suff=find_lr(lp,rp);
                if(pre==suff)
                    lp=rp+1,rp=lp+mid-1,cnt++;
                else lp++,rp++;
            }
            //cout<<cnt<<"\n";
            memo[mid]=cnt;
        }
        if(cnt>=k)low=mid,ans=mid;
        else high=mid;

    }
    ans==-1 ? cout<<0<<"\n" : cout<<ans<<"\n";


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
