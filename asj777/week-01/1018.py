# 25.03.20 C++ -> Python(Data Science) 코드 연습 
# 체스판 다시 칠하기(브루트 포스)

N,M = map(int,input().split())

arr = [input() for i in range(N)]
ans = []

for a in range(N-7):
    for b in range(M-7):
        white = 0 #W로 시작
        black = 0 #B로 시작
        for i in range(a,a+8): # 자른 범위에서 부터 +8
            for j in range(b,b+8):
                if((i+j)%2==0): # 짝수(W)
                    if(arr[i][j]!='W'): # black라면
                        white+=1
                    else:
                        black+=1
                else: # 홀수(B)
                    if(arr[i][j]!='B'): # white라면
                        white+=1
                    else:
                        black+=1
        ans.append(white)
        ans.append(black)

print(min(ans))

