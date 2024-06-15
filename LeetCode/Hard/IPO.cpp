// Link: https://leetcode.com/problems/ipo/
class Solution {
public:
 
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int,int>>mn;
        priority_queue<int>mx;
        for(int i=0;i<capital.size();i++)
            mn.push({-capital[i],profits[i]});
        for(;k--;){
            while(!mn.empty()&&-mn.top().first<=w){
                auto [a,b]=mn.top();
                mn.pop();
                mx.push(b);
        }
        if(mx.empty())break;
        w+=mx.top();
        mx.pop();
        

    }
    return w;
    }
};
