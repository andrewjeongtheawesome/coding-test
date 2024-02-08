import sys
input = sys.stdin.readline

a = int(input())
input_list = []
for _ in range(a):
    input_list.append(list(map(str, input().split())))

for i in range(a):
    input_list[i][1] = int(input_list[i][1])
    input_list[i][2] = int(input_list[i][2])
    input_list[i][3] = int(input_list[i][3])

# lambda를 통해 2차원 배열에 있어서 요소별로 정렬이 가능하다
# 괄호로 묶어줌으로써 첫번째 원소가 같으면 뒤의 조건으로 넘어간다
# '-'를 통해 역순으로 정렬할 수 있다.
input_list.sort(key = lambda x:(-x[1], x[2], -x[3], x[0]))

for _ in range(a):
    print(input_list[_][0])