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

#백준 2309번 문제: 일곱 난쟁이
if __name__ == '__main__':
    #Input
    #print("입력값")
    num = [int(input()) for _ in range(9)]

    #정렬 및 합계
    num.sort()
    print(*num)
    num_sum = sum(num)
    print(num_sum)

    #Output
    #print("\n출력값")
    for i in range(9):
        for j in range(i + 1, 9):
            if num_sum - num[i] - num[j] == 100:
                for k in range(9):
                    if k != i and k != j:
                        print(num[k]) #완벽 이해했다.


