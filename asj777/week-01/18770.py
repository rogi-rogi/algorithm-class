# 25.03.22 C++ -> Python(Data Science) 코드 연습 
# 좌표 압축 (정렬)

N = int(input())

arr = list(map(int,input().split())) # 입력

X = sorted(set(arr)) # 중복제거

sort_X = {val: idx for idx, val in enumerate(X)} #인덱스 매핑 과정?

print(*[sort_X[i] for i in arr]) #원본 arr에 대해 해당 값에 대한 인덱스 찾기
