output_list = []
current = 0
for _ in range(10):
    a,b = map(int, input().split())
    current += b
    current -= a
    output_list.append(current)
print(max(output_list))