from sys import stdin

input = stdin.readline

def bt(row):
    global res
    if row == N:
        res += 1
        return
    
    for col in range(N):
        if not col_check[col] and not diag1_check[row + col] and not diag2_check[row - col + N - 1]:
            col_check[col] = diag1_check[row + col] = diag2_check[row - col + N - 1] = True
            bt(row + 1)
            col_check[col] = diag1_check[row + col] = diag2_check[row - col + N - 1] = False

if __name__ == '__main__':
    N = int(input())
    res = 0
    col_check = [False] * N
    diag1_check = [False] * (2*N-1)
    diag2_check = [False] * (2*N-1)
    bt(0)
    print(res)
