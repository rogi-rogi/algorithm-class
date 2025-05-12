# s3 11727, 2xn 타일링 2
"""
2*i크기의 보드를 채우는 경우의 수
2*4는 2*3에 2*1 타일 1개 추가 >|

2*4는 2*2에 1*2 타일 2개 추가 > ||
2*4는 2*2에 2*2 타일 1개 추가 >[] >>정사각형 타일

dpi-1에 2x1타일 추가
dpi-2 1x2타일 2개 추가
dpi-2 2x2타일 1개 추가
"""
n=int(input())
MOD=10_007
dp=[0]*(n+1)
if n==1:
    print(n)
elif n==2:
    print(3)
else:
    dp[1]=1;dp[2]=3
    for i in range(3,n+1):
        dp[i]=(dp[i-1]+2*dp[i-2])%MOD
    print(dp[n])
