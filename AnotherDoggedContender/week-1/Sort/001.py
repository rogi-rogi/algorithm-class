from sys import stdin
input = stdin.readline

maxNum, kthNum = map(int, input().split())
numArr = [int(x) for x in input().split()]
numArr.sort()
print(numArr[kthNum - 1])
