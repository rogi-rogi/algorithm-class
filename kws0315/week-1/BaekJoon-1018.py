from math import *
from heapq import heappop, heappush
from itertools import combinations
from collections import defaultdict, deque
from bisect import bisect_left, bisect_right
from sys import stdin, setrecursionlimit
from functools import reduce

input = stdin.readline
setrecursionlimit(10 ** 6)

INF = int(1e10)

#백준 1018번 문제: 체스판 다시 칠하기
if __name__ == '__main__':
    #Input
    N, M = map(int, input().split()) #범위 설정 (가로X세로)
    board = [input().rstrip() for _ in range(N)]

    #미리 패턴 하나 생성
    ptns = [
        ['BWBWBWBW', 'WBWBWBWB'] * 4,
        ['WBWBWBWB', 'BWBWBWBW'] * 4,
    ]
    res = N * M
    for i in range(N - 7): #2X5로 추산해야하기 때문에 -7한다 (for값은 +1이 최대값)ss
        for j in range(M - 7):
            for ptn in ptns:
                cnt = 0
                for di in range(8):
                    for dj in range(8):
                        if board[i + di][j + dj] != ptn[di][dj]:
                            cnt += 1
                res = min(res, cnt)
    print(res)

