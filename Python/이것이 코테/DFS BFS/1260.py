from collections import deque
import sys
input = sys.stdin.readline

n, m, v = map(int, input().split())
in_graph = [[False] * (n + 1) for _ in range(n + 1)]
checkList_dfs = [0 for _ in range(n+1)]
checkList_bfs = [0 for _ in range(n+1)]

for _ in range(m):
    a, b = map(int, input().split())
    in_graph[a][b] = True
    in_graph[b][a] = True
def bfs(V):
    q = deque([V])
    checkList_bfs[V] = True
    while q:
        V = q.popleft()
        print(V, end=" ")
        for i in range(1, n + 1):
            if not checkList_bfs[i] and in_graph[V][i]:
                q.append(i)
                checkList_bfs[i] = True


def dfs(V):
    checkList_dfs[V] = True 
    print(V, end=" ")
    for i in range(1, n + 1):
        if not checkList_dfs[i] and in_graph[V][i]:
            dfs(i)


dfs(v)
print("")
bfs(v)

# for _ in range(m):
#     i, n = map(int, input().split())
#     in_graph[i-1].append(n)
#
# for j in range(m-1):
#     in_graph[j] = sorted(in_graph[j])

# def dfs(graph, v, visited):
#     visited[v] = True
#     print(v, end=" ")
#     for items in graph[v-1]:
#         if not visited[items]:
#             dfs(graph, items, visited)
#
# def bfs(graph, v, visited):
#     queue = deque([v])
#     visited[v] = True
#     while queue:
#         s = queue.popleft()
#         print(s, end=' ')
#         for i in graph[s-1]:
#             if not visited[i]:
#                 queue.append(i)
#                 visited[i] = True
