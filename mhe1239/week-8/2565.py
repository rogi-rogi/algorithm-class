n=int(input())
lsit=[[*map(int,input().split())] for _ in range(n)]
lsit.sort()
b=[_[1] for _ in lsit]
dp=[1]*n
for i in range(n):
    for j in range(i):
        if b[j]<b[i]:
            dp[i]=max(dp[i],dp[j]+1)
res=n-max(dp)
print(res)
