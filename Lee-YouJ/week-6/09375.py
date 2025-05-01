from collections import Counter
from sys import stdin

input = stdin.readline

if __name__ == '__main__':
    res = []
    for _ in range(int(input())):
        n = int(input())
        clothes = [input().split()[1] for _ in range(n)]
        
        cnt = 1
        for _, value in Counter(clothes).items():
            cnt *= value + 1
        res.append(cnt - 1)
                
    print(*res, sep='\n')
