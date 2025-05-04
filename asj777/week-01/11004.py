# 25.03.22 C++ -> Python(Data Science) 코드 연습 
# K번쨰 수

N,K = map(int,input().split())

arr = list(map(int,input().split()))

arr = sorted(arr)
print(arr[K-1])

