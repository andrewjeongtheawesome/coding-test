import sys
input = sys.stdin.readline
a = int(input())
def gcd(a, b):
    while b != 0:
        a, b = b, a%b
    return a

for _ in range(a):
    input_list = list(map(int, input().split()))
    total = 0
    for j in range(1, len(input_list)):
        for k in range(j+1, len(input_list)):
            total += gcd(input_list[j], input_list[k])
    print(total)


# 문제를 잘 읽자. 모든 쌍의 GCD를 구하는 문제이다.
# math 라이브러리를 활용할 수도 있다.
# for _ in range(a):
#     output_list=[]
#     input_list = list(map(int, input().split()))
#     GCDarr = input_list[0]
#     for j in range(len(input_list)):
#         GCDarr = gcd(GCDarr, input_list[j])
#         output_list.append(GCDarr)
#     print(sum(output_list))
