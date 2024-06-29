// Link: https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/

void dfs(int u,int pa,vector<vector<int>>& ans,vector<vector<int>>& adj,vector<bool>&vis){
    vis[u]=1;
    for(auto it:adj[u]){
        if(!vis[it]){
           ans[it].push_back(pa);
            dfs(it,pa,ans,adj,vis);
        }
    }
}
class Solution {
public:
vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
       vector<vector<int>>adj(n);
       vector<vector<int>>ans(n);
       for(auto it:edges){
      
            adj[it[0]].push_back(it[1]);

       }

        for(int i=0;i<n;i++){
           vector<bool>vis(n,0);
            dfs(i,i,ans,adj,vis);
        }
        for(int i=0;i<n;i++)sort(ans[i].begin(),ans[i].end());
        
        return ans;

    }
};
