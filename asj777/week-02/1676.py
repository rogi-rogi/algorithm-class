# 25.03.24 C++ -> Python(Data Science) 코드 연습 
# 팩토리얼 0의 개수 (정렬)

N = int(input())

cnt = 0
mod = 5
while N>=mod:
    cnt += N//mod
    mod *=5

print((int)(cnt))
