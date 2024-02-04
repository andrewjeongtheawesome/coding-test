import sys
input = sys.stdin.readline
n, m = map(int, (input().split()))
d_list = []
b_list = []
output_list = []

for i in range(n):
    d_list.append(input())
for j in range(m):
    b_list.append(input())

output_list = list(set(d_list) & set(b_list))
#set을 이용해서 시간 단축
output_list.sort()
print(len(output_list))
for items in output_list:
    print(items, end="")


# for items in d_list:
#     if(items in b_list):
#         output_list.append(items)
#         d_list.remove(items)
#         b_list.remove(items)
#     else:
#         continue
#
# for items in b_list:
#     if(items in d_list):
#         output_list.append(items)
#         d_list.remove(items)
#         b_list.remove(items)
#     else:
#         continue