# 25.03.23 C++ -> Python(Data Science) 코드 연습 
# 로프 (그리디)

N = int(input())
arr = [int(input()) for _ in range(N)]
# O(n log n)
arr.sort(reverse=True)  # arr.reverse()는 단순히 뒤집기만 한다 O(n)연산
weight = 0

for i in range(N):
    weight = max(weight,arr[i]*(i+1))

print(weight)
