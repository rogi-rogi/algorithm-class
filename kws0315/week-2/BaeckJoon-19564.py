from math import *
from heapq import heappop, heappush
from itertools import combinations
from collections import defaultdict, deque
from bisect import bisect_left, bisect_right
from sys import stdin, setrecursionlimit

input = stdin.readline
setrecursionlimit(10 ** 6)

INF = int(1e10)

#백준 19564번: 반복
if __name__ == '__main__':
    S = input().rstrip()
    L = 1
    for i in range(1, len(S)):
        if S[i] <= S[i-1]: #Python에선 아스키코드를 숫자로 바로 볼 수 있음
            L += 1
    print(L)
