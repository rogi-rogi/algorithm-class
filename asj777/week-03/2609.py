#from math import gcd,lcm -- > 라이브러리 사용 가능

# 25.03.25 C++ -> Python(Data Science) 코드 연습 
# 최대공약수 최소공배수(수학)

def gcd(a,b):
    if(b==0):
        return a
    return gcd(b,a%b)

def lcm(a,b):
    return a*b // gcd(a,b)

n,m = map(int,input().split())
print(gcd(n,m))
print(lcm(n,m))


