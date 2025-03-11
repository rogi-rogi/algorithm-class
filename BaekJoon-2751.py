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

#백준 2751번 문제: 수 정렬하기 2
if __name__ == '__main__':
    N = int(input())
    Nums = []

    #첫째 줄 수만큼 입력값을 받는다.
    for i in range(N):
        Nums.append(int(input()))
    Nums.sort()

    for n in Nums:
        print(n)

