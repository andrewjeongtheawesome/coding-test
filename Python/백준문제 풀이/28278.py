import sys
input = sys.stdin.readline

a = int(input())
stk = []
for _ in range(a):
    b = list(map(int, input().split()))
    if b[0] == 1:
        stk.append(b[1])
    elif b[0] == 2:
        if len(stk) == 0:
            print(-1)
        else:
            print(stk.pop())#pop을 활용하면 시간 절약이 된다.
    elif b[0] == 3:
        print(len(stk))
    elif b[0] == 4:
        if len(stk) == 0:
            print(1)
        else:
            print(0)
    elif b[0] == 5:
        if len(stk) == 0:
            print(-1)
        else:
            print(stk[-1])