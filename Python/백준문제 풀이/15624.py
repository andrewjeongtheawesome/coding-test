#list를 사용하면 메모리가 딸린다.
#왜 틀린지 정확히는 모르겠지만 아마도 재귀 부분에서 문제가 생긴 것 같다.
n = int(input())
a, b = 0, 1
for i in range(n):
    a, b = (a+b)%1000000007, a%1000000007

print(a)

# top-down 방식 -> 절반만 맞음
# a = int(input())
# import sys
# input = sys.stdin.readline
# sys.setrecursionlimit(10**6)
# d = [0]*1000001
#
# d[1] = 1
# d[2] = 1
#
# for i in range(3, a + 1):
#     d[i] = (d[i - 1]% 1000000007) + (d[i - 2]% 1000000007)
#
# print(d[a])

#bottom-up 방식 -> 시간 초과
# def fibo(x):
#     if x == 1 or x == 2:
#         return 1
#
#     if d[x] != 0:
#         return d[x]
#
#     d[x] = fibo(x - 1)% 1000000007 + fibo(x - 2)% 1000000007
#     return d[x]
#
# print(int(fibo(a)))