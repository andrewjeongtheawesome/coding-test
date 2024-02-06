import sys
input = sys.stdin.readline
def gcd(a,b):
    while b != 0:
        a,b = b, a%b
    return a

a = int(input())
for _ in range(a):
    total = []
    input_list = list(map(int, input().split()))
    for j in range(0, len(input_list), 1):
        for k in range(j + 1, len(input_list), 1):
            total.append(gcd(input_list[j], input_list[k]))
    print(max(total))