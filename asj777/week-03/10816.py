from bisect import bisect_left, bisect_right
# 25.03.25 C++ -> Python(Data Science) 코드 연습 
# 수 찾기(이진탐색)

# lower_bound --> STL lower_bound : 탐색 대상 값 이상이 처음으로 등장하는 위치 
# upper_bound --> STL upper_bound : 탐색 대상 값 초과가 처음으로 등장하는 위치

N = int(input())
arr = list(map(int,input().split()))
arr.sort()

M = int(input())
arr2 = list(map(int,input().split()))


for i in arr2:
    ans = bisect_right(arr,i) - bisect_left(arr,i)
    print(ans)
