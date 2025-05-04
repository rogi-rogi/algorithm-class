from sys import stdin
input = stdin.readline
from bisect import bisect_left, bisect_right

#백준 10816번: 숫자 카드 2
if __name__ == '__main__':
    res = []
    N = int(input())
    A = [*map(int, input().split())]
    M = int(input())
    B = [*map(int, input().split())]

    cnt = [0] * M
    A.sort()
    for idx, target in enumerate(B):
        cnt[idx] = bisect_right(A, target) - bisect_left(A, target)

    print(*cnt)

