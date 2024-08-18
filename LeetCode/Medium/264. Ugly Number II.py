# Link: https://leetcode.com/problems/ugly-number-ii/
class Solution:
    def nthUglyNumber(self , n : int) -> int:

        v = set()
        v.add(1)
        ar = [2,3,5]
        for i in range(3):
            for j in list(v):
                x=j
                while x*ar[i]<=1e12:
                    v.add(x*ar[i])
                    x*=ar[i]

        idx = sorted(v)
        return idx[n-1]



         
