from sys import stdin

input = stdin.readline

def generate_msg(cnt, idx):
    return "____" * cnt + msg_list[idx]

def recursive(depth):
    if depth == 0:
        print("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.")
    elif depth <= N:
        for i in range(4):
            print(generate_msg(depth - 1, i))
    elif depth == N + 1:
        for i in range(4, 7):
            print(generate_msg(depth - 1, i))
        return
    recursive(depth + 1)
    if depth >= 1:
        print(generate_msg(depth - 1, 6))


#백준 17478번: 재귀함수가 뭔가요?
if __name__ == '__main__':
    N = int(input())
    msg_list = [
        "\"재귀함수가 뭔가요?\""
        "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.",
        "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.",
        "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"",

        "\"재귀함수가 뭔가요?\"",
        "\"재귀함수는 자기 자신을 호출하는 함수라네\"",

        "라고 답변하였지."
    ]

    for i in range(N):
        recursive(i)


