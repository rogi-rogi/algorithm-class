#from math import gcd,lcm

# 25.03.27 C++ -> Python(Data Science) 코드 연습 
# 좌표 정렬하기 (정렬)

N= int(input())

arr = [tuple(map(int,input().split())) for _ in range(N)]


arr.sort(key = lambda x : (x[0],x[1]))
for i,j in arr:
    print(i, j)
