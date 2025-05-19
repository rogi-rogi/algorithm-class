from sys import stdin, setrecursionlimit
setrecursionlimit(int(1e5 + 4))

input = stdin.readline
    
def dfs(i):
    for child in graph[i]:
        dp[child] += dp[i]
        dfs(child)
        
if __name__ == '__main__':
    N, M = map(int, input().split())
    A = [0] + list(map(int, input().split()))
    
    dp = [0] * (N + 1)
    for _ in range(M):
        i, w = map(int, input().split())
        dp[i] += w
    
    graph = [[] for _ in range(N + 1)]
    for i in range(2, N + 1):
        graph[A[i]].append(i)
    dfs(1)
    
    del dp[0]
    print(*dp)
