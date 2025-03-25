from math import *
from sys import stdin

input = stdin.readline

if __name__ == '__main__':
    for _ in range(int(input())):
        # Input
        N, *A = [*map(int, input().rstrip().split())]

        # Solve
        gcd_sum = 0
        for i in range(N - 1):
            for j in range(i + 1, N):
                gcd_sum += gcd(A[i], A[j])

        # Output
        print(gcd_sum)