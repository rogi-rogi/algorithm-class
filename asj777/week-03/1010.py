# 25.03.25 C++ -> Python(Data Science) 코드 연습 
# 다리 놓기 (수학)

dp = [[0] * 31 for _ in range(31)]
for i in range(31):
    dp[i][0] = 1
    dp[i][i] = 1

for i in range(1,31):
    for j in range(1,i):
        dp[i][j] = dp[i-1][j-1] + dp[i-1][j]

T = int(input())
for _ in range(T):
    N,M = map(int,input().split())
    print(dp[M][N])
