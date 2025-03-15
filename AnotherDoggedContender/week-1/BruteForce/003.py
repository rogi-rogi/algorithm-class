# 탐색 앵커의 범위: 0~(row - 7), 0~(col - 7)
#     8*8 범위를 정하는 기준점
# 보드 범위: 앵커 좌표가 a, b라고 하면, a~a+8, b~b+8
# bChangeStack: 시작점이 B라고 칠 때 다시 칠해야 하는 정사각형의 개수
# wChangeStack: 시작점이 W라고 칠 때 다시 칠해야 하는 정사각형의 개수
# 매 탐색 마다...(현재 커서 좌표: cursorX, cursorY)
#     시작점이 W라고 치면
#         수직거리가 홀수면 B, 짝수면 W
#         (앵커와 커서의 수직거리가 홀수인데 문자가 W이거나)(앵커와 커서의 수직거리가 짝수인데 문자가 B이면) wChangeStack + 1
#     시작점이 B라고 치면
#         수직거리가 홀수면 W, 짝수면 B
#         (앵커와 커서의 수직거리가 홀수인데 문자가 B이거나)(앵커와 커서의 수직거리가 짝수인데 문자가 W이면) bChangeStack + 1
# changeStack의 최솟값 출력
from sys import stdin
input = stdin.readline
col, row = map(int, input().split())
boardArray = []
minChangeStack =40
for i in range(col):
    boardArray.append(input().rstrip())
for anchorY in range(col - 7):
    for anchorX in range(row - 7):
            bChangeStack = 0
            wChangeStack = 0
            for cursorY in range(anchorY, anchorY + 8):
                for cursorX in range(anchorX, anchorX + 8):
                    vDistance = (cursorX - anchorX)+(cursorY - anchorY)                  
                    if (vDistance % 2 == 1 and boardArray[cursorY][cursorX] == 'W') or (vDistance % 2 == 0 and boardArray[cursorY][cursorX] == 'B'):
                            wChangeStack += 1                   
                    if (vDistance % 2 == 1 and boardArray[cursorY][cursorX] == 'B') or (vDistance % 2 == 0 and boardArray[cursorY][cursorX] == 'W'):
                            bChangeStack += 1
            # 이 앵커에서 탐색 완료
            minChangeStack = min(minChangeStack, wChangeStack, bChangeStack)
            # 앵커 바꿈

print(minChangeStack)
