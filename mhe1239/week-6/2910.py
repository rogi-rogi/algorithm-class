"""
b3 2910, 빈도 정렬
n: 길이 n
C: output은 모두 c보다 작거나 같다.
output: 얼마나 나왔느냐에 따라 input갯수
"""

from collections import Counter
n,c=map(int,input().split())
A=[*map(int,input().split())]
ch=dict()
for i,v in enumerate(A):
    if v not in ch:
        ch[v]=i
cnt=Counter(A)
res=sorted(A,key=lambda n:(-cnt[n],ch[n]))
print(*res)
