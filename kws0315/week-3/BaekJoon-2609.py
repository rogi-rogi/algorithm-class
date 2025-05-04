from sys import stdin
from math import gcd
input = stdin.readline

if __name__ == '__main__':
    n1, n2 = map(int, input().split())

    gcd = gcd(n1, n2)
    lcm = (n1*n2) // gcd

    print(gcd)
    print(lcm)