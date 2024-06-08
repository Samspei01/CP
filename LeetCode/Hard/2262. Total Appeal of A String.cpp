//Link: https://leetcode.com/problems/total-appeal-of-a-string/
class Solution {
public:
    long long appealSum(string s) {
         vector<long long>adj[27];
    long long n=s.size();
    long long ar[n];
    long long all=0;
    for(long long i=0;i<n;i++) {
        adj[s[i]-'a'].push_back(i);
        ar[i]=min(n-i,i+1)*max(n-i,i+1);
        //cout<<ar[i]<<" ";
        all+=((i+1)*(n-i));
    }
  //  cout<<all<<"\n";
    for(long long i=0;i<n;i++) {
        long long r=-1;
        long long low=0,high=adj[s[i]-'a'].size()-1,mid;
        while(low<=high) {
           mid=(low+high)/2;
            if(adj[s[i]-'a'][mid]==i&&mid!=0){r=adj[s[i]-'a'][max(mid-1,0LL)];break;}
            if(adj[s[i]-'a'][mid]<i)low=mid+1;
            else high=mid-1;
        }
        if(r!=-1)
        ar[i]-=ar[i]-(i-r)*(n-i);



    }
    long long ans=0;
    for(int i=0;i<n;i++)ans+=ar[i];
    return ans;
    }
};
