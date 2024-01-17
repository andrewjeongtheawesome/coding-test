import sys
input = sys.stdin.readline
n, k = map(int,input().split())
total = 0
m_list = []
for _ in range(n):
    m_list.append(int(input()))

for i in range(len(m_list)-1, -1, -1):
    if m_list[i] <= k:
        if k <= 0:
            break
        else:
            total += k // m_list[i]
            k = k % m_list[i]

print(total)



# for i in range(len(m_list)-1, -1, -1):
#     total += k // m_list[i]
#     k = k % m_list[i]