# 25.03.24 C++ -> Python(Data Science) 코드 연습 
# 소수 구하기 (수학)


def seive(m,n):
    arr = [True] * (n+1)
    arr[0]=arr[1]=0
    for i in range(2,int(n**0.5)+1):
        if(arr[i]):
            for j in range(i*i,n+1,i):
                arr[j] = 0
    
    for i in range(m,n+1):
        if(arr[i]):
            print(i)

M,N= map(int,input().split())
seive(M,N)
