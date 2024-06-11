// Link: https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int last=0;
        for(int i=0;i<arr2.size();i++)
            for(int j=0;j<arr1.size();j++)
                if(arr1[j]==arr2[i]){
                swap(arr1[last],arr1[j]);
                last++;
                }
        
        sort(arr1.begin()+last,arr1.end());
        return arr1;

    }
};
