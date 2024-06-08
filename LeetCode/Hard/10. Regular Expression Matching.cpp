//Link : https://leetcode.com/problems/regular-expression-matching/

class Solution {
public:
int dp[25][25];
int n1,n2;
string s1,s2;
bool fun(int i, int j)
{
if(dp[i][j]!=-1)return dp[i][j];
if(i>=n1&&j>=n2)return true;
if(j>=n2)return false;


bool ch=(i<n1&&(s1[i]==s2[j]||s2[j]=='.')); 
if(j+1<n2&&s2[j+1]=='*'){
    return dp[i][j]=((ch&&fun(i+1,j))||fun(i,j+2));

}
if(ch)
    return dp[i][j]=fun(i+1,j+1);
return dp[i][j]=false;

}
    bool isMatch(string s, string p) {

    n1=s.size();
    n2=p.size();
    s1=s;
    s2=p;
    for(int i=0;i<=n1+1;i++)
        for(int j=0;j<=n2+1;j++)dp[i][j]=-1;
        return fun(0,0);
    }
};
/*

s[i]==p[j]||p[j]=='.' continue;
else 
{
p[j+1]=='*' 2 options 
fun(i+1,j) and (p[j]=='.' or s[i]==p[j])
or
fun(i,j+2)
}


*/
