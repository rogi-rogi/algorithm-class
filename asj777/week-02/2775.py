# 25.03.24 C++ -> Python(Data Science) 코드 연습 
# 부녀회장이 될꺼야 (다이나믹 프로그래밍)

dp = [[0]* 15 for _ in range(15)] #리스트 컴프리헨션 -->pythonic code need practice!

for i in range(1,15):
    dp[0][i] = i

for i in range(1,15):
    for j in range(1,15):
        dp[i][j] = dp[i-1][j] + dp[i][j-1] 

T = int(input())

for _ in range(T):
    k = int(input())
    n = int(input())
    print(dp[k][n])






