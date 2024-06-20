// Link: https://leetcode.com/problems/magnetic-force-between-two-balls/

class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1,high=position.back()-position.front(),ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int baaalls=1,last=position.front();
            for(auto it:position){
                if(it-last>=mid)baaalls++,last=it;
            }
            if(baaalls>=m)low=mid+1,ans=mid;
            else high=mid-1;
        }
        
        return ans;

    }
    /*
    4 days using binary search (⩺_⩹)
    */
};
