from sys import stdin
input = stdin.readline

def binary_search(arr):
    left, right = 1, max(arr)
    res = 0
    while left <= right:
        mid = (left + right) // 2
        cnt = sum([cable // mid for cable in arr])
        if cnt >= N:
            res = max(res, mid)
            left = mid + 1
        else:
            right = mid - 1
    return res

if __name__ == '__main__':
    # Input
    K, N = map(int, input().split())
    cable_list = [int(input()) for _ in range(K)]

    # Solve & Output
    print(binary_search(cable_list))
