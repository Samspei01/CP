# Link: https://leetcode.com/problems/maximum-energy-boost-from-two-drinks/
class Solution:

    def __init__(self):
        self.dp=[[]]
        self.a=[]
        self.b=[]
        self.n=0
        
    def fun(self, i , sw : int)-> int:
        if i==self.n:
            return 0
        if self.dp[i][sw]!=-1:
            return self.dp[i][sw]
        if sw==0:
            self.dp[i][sw]=max(self.dp[i][sw],self.fun(i+1,sw)+self.a[i])
            self.dp[i][sw]=max(self.dp[i][sw],self.fun(i+1,sw^1))
        else:
            self.dp[i][sw]=max(self.dp[i][sw],self.fun(i+1,sw)+self.b[i])
            self.dp[i][sw]=max(self.dp[i][sw],self.fun(i+1,sw^1))
        return self.dp[i][sw]
    def maxEnergyBoost(self, ea: List[int], eb: List[int]) -> int:
        self.a=ea
        self.b=eb
        self.n=len(self.a)
        self.dp=[ [-1 for _ in range(2)] for _ in range(self.n+5)]
        return max(self.fun(0,0),self.fun(0,1))

