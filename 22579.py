from sys import stdin

input = stdin.readline

if __name__ == '__main__':
    N = int(input())
    stair = [int(input()) for _ in range(N)]
    dp = [0] * N

    if N == 1:
        print(stair[0])
    elif N == 2:
        print(stair[0] + stair[1])
    else:
        dp[0] = stair[0]
        dp[1] = stair[0] + stair[1]
        dp[2] = max(stair[0] + stair[2], stair[1] + stair[2])
        for i in range(3, N):
            dp[i] = max(dp[i-2] + stair[i], dp[i-3] + stair[i-1] + stair[i])
        print(dp[N-1])
