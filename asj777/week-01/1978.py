# 25.03.18 C++ -> Python(Data Science) 코드 연습 
# 소수 찾기

def prime(n):
    if(n<2):
        return False
    for i in range(2,(int)(n**0.5)+1):
        if(n%i==0):
            return False
    return True

N = int(input())
arr = list(map(int,input().split()))


cnt = 0
for i in range(N):
    if(prime(arr[i])):
        cnt+=1

print(cnt)
