// Link: https://leetcode.com/problems/minimum-number-of-moves-to-seat-everyone/
class Solution {
public:
    int minMovesToSeat(vector<int>& sets, vector<int>& students) {
     sort(sets.begin(),sets.end());
        sort(students.begin(),students.end());
        int n=sets.size();
        int ans=0;
        for(int i=0;i<n;i++)
        ans+=abs(sets[i]-students[i]);
        return ans;
    }
};
/*

*/
