import sys
import math
input = sys.stdin.readline
a, b = map(int, input().split())
array = [True for i in range(b + 1)]

for i in range(2, int(math.sqrt(b)) + 1):
    if array[i] == True:
        j = 2
        while i * j <= b:
            array[i * j] = False
            j += 1

for i in range(a, b + 1):
    if i == 1:
        continue
    if array[i]:
        print(i)


# odd_list = list(range(2, b + 1, 1))
# output = []
# for items in odd_list:
#     output.append(items)
#     current = items
#     add = items
#     while (1):
#         current += add
#         if (current > b):
#             break
#         if current in odd_list:
#             odd_list.remove(current)
#         else:
#             continue
#
#
# for items in output:
#     print(items)