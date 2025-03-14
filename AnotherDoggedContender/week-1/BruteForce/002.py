# (1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19)
# 입력: E, S, M 값
# 출력: 입력으로 받은 ESM 조합이 나오는 가장 빠른 연도
# yearCount: 반복할 때 마다 1씩 추가. 
# 계속 E, S, M 값을 1씩 올리다가 E, S, M 값이 입력받은 ESM과 모두 일치하면 그 시점의 yearCount 출력
# 각 값이 최대값에 도달하면 1로 초기화
from sys import stdin
input = stdin.readline
inputE, inputS, inputM = map(int, input().split())
yearCount = 1
changeE= changeS=changeM = 1
while not(inputE == changeE and inputS == changeS and inputM == changeM):
    yearCount += 1
    if changeE == 15:
        changeE = 1
    else:
        changeE += 1
    if changeS == 28:
        changeS = 1
    else:
        changeS += 1
    if changeM == 19:
        changeM = 1
    else:
        changeM += 1
    
print(yearCount)


