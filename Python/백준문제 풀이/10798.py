a = []
result = []
for _ in range(5):
    b = list(map(str, input()))
    a.append(b)

reverse = reversed(a)
rotated = list(zip(*reverse))
for items in rotated:
    output = reversed(items)
    for words in output:
        result.append(words)

for items in result:
    print(items, end="")