# 25.03.25 C++ -> Python(Data Science) 코드 연습 
# 직각삼각형 (수학)

def is_Tri(a,b,c):
    if(a**2+b**2==c**2):
        return True
    return False

while(1):
    a,b,c = map(int,input().split())
    if(a ==0 and b==0 and c ==0):
        break

    a,b,c = sorted([a,b,c]) #정렬

    if(is_Tri(a,b,c)):
        print("right")
    else:
        print("wrong")

