from collections import deque, defaultdict
from sys import stdin

input = stdin.readline

def bfs(X):
    if X == 1:
        return 0
    memo = defaultdict(int)
    queue = deque([X])
    while queue:
        cur = queue.popleft()
        if cur == 1:
            return memo[cur]
        if cur % 3 == 0 and cur // 3 not in memo:
            memo[cur//3] = memo[cur] + 1
            queue.append(cur // 3)
        if cur % 2 == 0 and cur // 2 not in memo:
            memo[cur//2] = memo[cur] + 1
            queue.append(cur // 2)
        if cur - 1 not in memo:
            memo[cur - 1] = memo[cur] + 1
            queue.append(cur - 1)

if __name__ == '__main__':
    X = int(input())
    print(bfs(X))
        
