from sys import stdin, setrecursionlimit
setrecursionlimit(10**6)

input = stdin.readline

WHITE = 0
BLACK = 1

def dfs(cur, parent):
    dp[WHITE][cur] = price[cur][WHITE]
    dp[BLACK][cur] = price[cur][BLACK]

    for child in graph[cur]:
        if child == parent:
            continue
        dfs(child, cur)

        dp[WHITE][cur] += min(dp[WHITE][child], dp[BLACK][child])
        dp[BLACK][cur] += dp[WHITE][child]  # 자식은 반드시 WHITE

if __name__ == '__main__':
    N = int(input())
    
    graph = [[] for _ in range(N)]
    for _ in range(N - 1):
        u, v = map(int, input().split())
        graph[u].append(v)
        graph[v].append(u)

    price = []
    for _ in range(N):
        w, b = map(int, input().split())
        price.append([w, b])

    dp = [[0] * N for _ in range(2)]  # dp[WHITE][i], dp[BLACK][i]

    dfs(0, -1)
    print(min(dp[WHITE][0], dp[BLACK][0]))
