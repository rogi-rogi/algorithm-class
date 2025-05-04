from math import *
from heapq import heappop, heappush
from itertools import combinations
from collections import defaultdict, deque
from bisect import bisect_left, bisect_right
from sys import stdin, setrecursionlimit
from functools import reduce
import random

input = stdin.readline
setrecursionlimit(10 ** 6)

INF = int(1e10)

if __name__ == '__main__':
    while(True):
        D, M, Y = map(int, input().split())
        value = 0
        if D==0 and M == 0 and Y==0:
            break

        value = (M-1)*30 + (M//2) + D
        if Y%4==0:
            value -= 1

        print(value)
