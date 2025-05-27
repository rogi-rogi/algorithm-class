from sys import stdin
input=stdin.readline
dp=[0]*(100+1)
dp[1]=1
dp[2]=1
dp[3]=1
dp[4]=2
dp[5]=2
for i in range(6,100+1):
    dp[i]=dp[i-1]+dp[i-5]
t=int(input().strip())
for i in range(t):
    n=int(input().strip())
    print(dp[n])
