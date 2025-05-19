from sys import stdin, setrecursionlimit
setrecursionlimit(int(1e6))

input = stdin.readline

EARLY = 0
GENERAL = 1

def dfs(i):
    visited[i] = True
    dp[EARLY][i] = 1
    
    for v in graph[i]:
        if not visited[v]:
            dfs(v)
            dp[EARLY][i] += min(dp[EARLY][v], dp[GENERAL][v])
            dp[GENERAL][i] += dp[EARLY][v]

if __name__ == '__main__':
    N = int(input())
    
    graph = [[] for _ in range(N + 1)]
    for _ in range(N - 1):
        u, v = map(int, input().split())
        graph[u].append(v)
        graph[v].append(u)
        
    dp = [[0] * (N + 1) for _ in range(2)]
    visited = [False] * (N + 1)
    dfs(1)
    print(min(dp[EARLY][1], dp[GENERAL][1]))
