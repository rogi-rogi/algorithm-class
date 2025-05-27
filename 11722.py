from sys import stdin

input = stdin.readline

if __name__ == '__main__':
    N = int(input())
    A = [*map(int, input().split())]
    dp = [1] * N
    
    for i in range(1, N):
        for j in range(i):
            if A[j] > A[i]:
                dp[i] = max(dp[i], dp[j] + 1)
    print(max(dp))
