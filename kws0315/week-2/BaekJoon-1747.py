from sys import stdin

input = stdin.readline

#백준 1931번: 회의실 배정
def sive_of_eratosthenes(n):
    # n보다 작거나 같은 모든 수의 소수 여부를 저장할 리스트(True: 소수, False: 소수가 아님)
    is_prime = [True] * (n + 1)
    is_prime[0:2] = [False, False]  # 0과 1은 소수가 아님

    for i in range(2, int(n ** 0.5) + 1):
        if is_prime[i]:
            for j in range(i * i, n + 1, i):
                is_prime[j] = False
    # 소수 목록 반환
    primes = [i for i, prime in enumerate(is_prime) if prime]
    return primes

if __name__ == '__main__':
    N = int(input())
    for i in range(1000000):
        sive_of_eratosthenes(i)
        if()
