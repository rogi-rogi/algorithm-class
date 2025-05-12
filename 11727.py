from sys import stdin

input = stdin.readline

if __name__ == '__main__':
    N = int(input())
        
    if N <= 2:
        print([0, 1, 3][N])
    else:
        dp = [0] * (N + 1)
        dp[1] = 1
        dp[2] = 3
            
        for i in range(3, N + 1):
            dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % 10007
                
        print(dp[N])
