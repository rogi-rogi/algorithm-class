# 25.03.18 C++ -> Python(Data Science) 코드 연습 
# 날짜 계산 (브루트 포스)

E,S,M = map(int,input().split())
e,s,m = 1,1,1 # 지구 태양 달 tmp
year = 1

while(1):
    if(e==E and s==S and m ==M):
        print(year)
        break

    e+=1
    s+=1
    m+=1
    year+=1

    if(e>15):
        e = 1
    if(s>28):
        s = 1
    if(m>19):
        m = 1

    
    
