from sys import stdin

input = stdin.readline

#백준 2217번: 로프
if __name__ == '__main__':
    N = int(input())

    rope_list = sorted([int(input()) for _ in range(N)], reverse=True)
    for idx, rope  in enumerate(rope_list):
        res = max(res, rope * (idx + 1))

    # Output
    print(res)
