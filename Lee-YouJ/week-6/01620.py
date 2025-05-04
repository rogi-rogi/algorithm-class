from sys import stdin

input = stdin.readline

if __name__ == '__main__':
    N, M = map(int, input().split())
        
    no = 1
    pokemon_list = {}
    for _ in range(N):
        name = input().rstrip()
        pokemon_list[name] = no
        pokemon_list[str(no)] = name
        no += 1
            
    res = []
    for _ in range(M):
        res.append(pokemon_list[input().rstrip()])
            
    print(*res, sep='\n')
