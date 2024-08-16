// Link: https://leetcode.com/problems/maximum-distance-in-arrays
class Solution {
public:
    int maxDistance(vector<vector<int>>&ar) {
        
        int n=ar.size();

        int mn[n],mx[n];
        fill(mn,mn+n,1e9);
        fill(mx,mx+n,-1e9);
        for(int i=0;i<n;i++){
            for(auto it:ar[i])mx[i]=max(mx[i],it),mn[i]=min(mn[i],it);
            
        }
        int prefmx[n+2];
        int suffmx[n+2];
        int prefmn[n+2];
        int suffmn[n+2];
        prefmx[0]=-1e9;
        suffmx[n+1]=-1e9;
        prefmn[0]=1e9;
        suffmn[n+1]=1e9;
        for(int i=1;i<=n;i++){

           prefmx[i]=max(prefmx[i-1],mx[i-1]);
           prefmn[i]=min(prefmn[i-1],mn[i-1]);
           
    }
    
    for(int i=n;i>=1;i--){

           suffmx[i]=max(suffmx[i+1],mx[i-1]);
           suffmn[i]=min(suffmn[i+1],mn[i-1]);
           
    }
    int ans=-1e9;
    for(int i=1;i<=n;i++){
        int amx=max(prefmx[i-1],suffmx[i+1]);
        int bmn=min(prefmn[i-1],suffmn[i+1]);
        ans=max(ans,abs(mx[i-1]-bmn));
        ans=max(ans,abs(mn[i-1]-amx));
    }
    return ans;
    }
};
