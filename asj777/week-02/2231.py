# 25.03.24 C++ -> Python(Data Science) 코드 연습 
# 분해합 (수학)

def divide(n):
    for i in range(1,n+1):
        tmp = i + sum(map(int,str(i))) #각 숫자를 파싱(분해)후 더하기(자릿수 별 더하기)
        if(tmp==n):
            return i
    return 0
        
N = int(input())
print(divide(N))



