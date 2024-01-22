import sys
input = sys.stdin.readline
case = int(input())
h_name = "idx"
current_num = 0
for i in range(case):
    cases = int(input())
    for j in range(cases):
        a, b = map(str, input().split())
        if int(b) > current_num:
            current_num = int(b)
            h_name = a
    print(h_name)