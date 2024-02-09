import sys
input = sys.stdin.readline

a = int(input())
rope = []
output_list = []
for _ in range(a):
    rope.append(int(input()))
rope.sort(key = lambda x:x)

for items in rope:
    output_list.append(items)
if(a >= 2):
    for i in range(2, a + 1, 1):
        output_list.append(rope[a-i] * i)

print(max(output_list))