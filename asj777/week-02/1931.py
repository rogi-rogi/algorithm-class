# 25.03.24 C++ -> Python(Data Science) 코드 연습 
# 회의실 배정 (그리디)

N = int(input())
arr = [list(map(int,input().split())) for _ in range(N)]


cnt = 0  # 개수, 종료 시간
end = 0 
#1. 종료 시간이 짧을수록, 2. 빠른 시작시간 순으로
arr.sort(key = lambda x : (x[1],x[0])) 


for s,e in arr:
    if(s>=end): #종료시간을 넘어가면
        end = e #종료시간 갱신
        cnt+=1 #및 추가

print(cnt)
