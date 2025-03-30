# 25.03.24 C++ -> Python(Data Science) 코드 연습 
# 나이순 정렬 (정렬)

N = int(input())
arr = [input().split() for _ in range(N)]

arr.sort(key=lambda x: (int(x[0]))) #람다 함수를 이용해 나이순 정렬
    
for i,j in arr:
    print(i + " " + j)
