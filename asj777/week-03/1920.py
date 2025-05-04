# 25.03.25 C++ -> Python(Data Science) 코드 연습 
# 수 찾기(이진탐색)

def bineary_search(arr,target):
    left = 0
    right = len(arr)-1
    while(left<=right):
        mid = (left+right)//2
        if(arr[mid]==target):
            return True
        elif(arr[mid]<target):
            left = mid+1
        else:
            right =mid-1
    return False

N = int(input())  # 첫 번째 배열의 크기
A = list(map(int, input().split()))  # 첫 번째 배열

M = int(input())  # 두 번째 배열의 크기
B = list(map(int, input().split()))

A.sort()

for i in B:
    if(bineary_search(A,i)):
        print(1)
    else:
        print(0)









