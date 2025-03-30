import sys
# 25.03.27 C++ -> Python(Data Science) 코드 연습 
# FizzBuzz (수학)

for i in range(3,0,-1):
    st = (sys.stdin.readline().strip())
    if st not in ["Fizz","Buzz","FizzBuzz"]:
        n = int(st) + i

if(n%15==0):
    print("FizzBuzz")
elif(n%3==0):
    print("Fizz")
elif(n%5==0):
    print("Buzz")
else:
    print(n)
