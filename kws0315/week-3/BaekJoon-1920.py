from sys import stdin

input = stdin.readline

def binary_search(arr, target):
    left, right = 0, len(arr) - 1

    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return 1
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return 0

#백준 1920번: 수 찾기
if __name__ == '__main__':
    n = int(input())
    A = sorted([*map(int, input().split())])
    m = int(input())
    B = list(map(int, input().split()))

    for target in B: #여러번 출력하기 떄문에 시간 부족이 일어날 수 있음
        #프로그래머스같은 사이트에선 이렇게 하지 말고 리스트에 넣어서 한번에 출력하기
        print(binary_search(A, target))

