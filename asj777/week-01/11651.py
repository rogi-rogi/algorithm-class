# 25.03.22 C++ -> Python(Data Science) 코드 연습 
# 좌표 정렬하기2 (정렬)

N = int(input())

arr = [list(map(int,input().split())) for _ in range(N)]

arr.sort(key = lambda tmp:(tmp[1],tmp[0]))
for idx in arr:
    print(idx[0], idx[1])
