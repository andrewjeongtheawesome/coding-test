import sys
input = sys.stdin.readline
a, b = map(int,input().split())
input_list = []
output_list = []
current = b - 1

for _ in range(a):
    input_list.append(str(_ + 1))

while True:
    if(len(input_list) == 0):
        break
    else:
        if(current >= len(input_list)):
            current = current - len(input_list)
        else:
            output_list.append(input_list[current])
            del(input_list[current])
            current += b-1
print('<' ,end="")
for i in range(a):
    if i == (a-1):
        print(output_list[i], end="")
    else:
        print(output_list[i], end=", ")
print('>' , end="")



