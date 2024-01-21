import sys
input = sys.stdin.readline
a = int(input())
input_list = []

for i in range(a):
    n, m = map(int,input().split())
    b = 0
    for j in range(n, m + 1, 1):
        test_list = list(str(j))
        for items in test_list:
            if items == '0':
                b += 1
    print(b)
