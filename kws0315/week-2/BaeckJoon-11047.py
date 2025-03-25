from sys import stdin

input = stdin.readline

#백준 11047번: 동전 0
if __name__ == '__main__':
    #Init
    res = []

    #Input
    N, K = map(int, input().split())

    # Solved
    coins = sorted([int(input()) for _ in range(N)], reverse=True)

    cnt = 0
    for coin in coins:
        if K >= coin:
            cnt += K // coin
            K %= coin

    # Output
    print(cnt)