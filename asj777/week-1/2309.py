# 25.03.18 C++ -> Python(Data Science) 코드 연습 
# 일곱난쟁이 (브루트 포스)

arr = [int(input())for _ in range(9)]
arr = sorted(arr)

for i in range(8): # 0부터 7까지
    for j in range(i+1,9): # i+1부터 최대 8까지
        if(sum(arr) - arr[i]-arr[j]==100):
            first = arr[i]
            second = arr[j]
            break

arr.remove(first)
arr.remove(second)

for i in arr:
    print(i)
