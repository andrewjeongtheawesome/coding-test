import sys
input = sys.stdin.readline
a = int(input())
current = list(map(str, input()))
for _ in range(a - 1):
    input_list = list(map(str, input()))
    for i in range(len(input_list)):
        if current[i] == input_list[i]:
            continue
        else:
            current[i] = '?'
print(''.join(current))