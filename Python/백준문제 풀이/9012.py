import sys
input = sys.stdin.readline
a = int(input())

for _ in range(a):
    input_list = list(map(str, input()))
    input_list.pop()
    output_list = []
    for items in input_list:
        if items == '(':
            output_list.append(items)
        elif items == ')':
            if len(output_list) == 0:
                output_list.append(")")
                break
            else:
                output_list.pop()

    if len(output_list) == 0:
        print("YES")
    else:
        print("NO")