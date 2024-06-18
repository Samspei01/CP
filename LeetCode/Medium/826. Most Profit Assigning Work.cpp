// Link: https://leetcode.com/problems/most-profit-assigning-work/
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>v;
        int n=profit.size();
        for(int i=0;i<n;i++)v.push_back({profit[i], difficulty[i]});
        sort(v.begin(),v.end());
        sort(worker.begin(),worker.end());
        reverse(worker.begin(),worker.end());
        int st=0,ans=0;
        for(int i=v.size()-1;i>=0;i--){
        int low=st,high=worker.size()-1,idx=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(worker[mid]>=v[i].second)idx=mid,low=mid+1;
                else high=mid-1;
            }

            if(idx!=-1)
            ans+=(idx-st+1)*v[i].first,st=idx+1;
        }
        return ans;

    }
};
