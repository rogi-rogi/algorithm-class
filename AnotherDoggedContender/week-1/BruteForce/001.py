# 1. 숫자 9개를 입력받아 배열에 저장한다. 
# 2. 숫자 9개의 합을 구한 다음, 변수에 저장한다. (dataSum)
# 3. 완료 플래그를 만든다. (flag, 답을 찾으면 True, 기본값은 False)
# 4. for문 돌린다(i: 0~8, i++)
#     for문 돌린다(j: (i+1)~8, j++)
#         배열에서 i번째 수와 j번째 수를 더한다.(chosenSum)
#         dataSum - chosenSum == 100이면 
#             answer 배열에 i번째 수와 j번째 수를 제외하고 저장한다. 
#             flag를 True로 바꾸고 break 한다.
#     flag가 true이면 break한다.
# 5. answer 배열을 출력한다.

import sys
input = sys.stdin.readline

data = [int(input().rstrip()) for _ in range(9) ]


# data = [int(open(0).readline()) for _ in range(9) ] open(0)로 데이터를 받으면 런타임 에러가 나던데 왜 그런걸까요?
dataSum = sum(data)
answer=[]
flag = False
for i in range(0, len(data)):
    for j in range(i+1, len(data)):
        chosenSum = data[i] + data[j]
        if dataSum - chosenSum == 100:
            for x in range(0, len(data)):
                if x!= i and x != j:
                    answer.append(data[x])
            flag = True
    if flag == True:
        break
answer.sort()

print(*answer, sep='\n', end='')
