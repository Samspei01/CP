// Link: https://leetcode.com/problems/sort-colors/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int freq[3]={};
        vector<int>v;
        for(auto it:nums)freq[it]++;
        for(int i=0;i<3;i++){
            while(freq[i]){
                v.push_back(i);
                freq[i]--;
            }
        }
        nums=v;
    }
};
