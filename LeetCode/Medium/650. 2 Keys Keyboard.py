# Link: https://leetcode.com/problems/2-keys-keyboard/
class Solution:
    def __init__(self):
        self.sz=0
        self.dp=[[]]

    def fun(self,i,clip:int)-> int:
        if i==self.sz:
            return 0
        if i>self.sz:
            return int(1000000000)
        if self.dp[i][clip]!=-1:
            return self.dp[i][clip]

        op1=self.fun(i*2,i)+2
        op2=self.fun(i+clip,clip)+1
        res=min(op1,op2)
        self.dp[i][clip]=res
        return res

    def minSteps(self, n: int) -> int:
        self.dp=[[-1 for _ in range(1005)] for _ in range(1005)]
        self.sz=n
        if self.sz==1:
            return 0
        return self.fun(1,1)+1
        
