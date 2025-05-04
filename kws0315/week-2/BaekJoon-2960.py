if __name__ == '__main__':
    N, K = map(int, input().split())
    Nums = [n for n in range(N)]

    # Solve
    is_prime = [True] * (N + 1)
    for i in range(2, N + 1):
        for j in range(i, N + 1, i):
            if is_prime[j]:
                is_prime[j] = False
                if (K := K - 1) == 0:
                    # Output
                    print(j)
                    exit(0)


