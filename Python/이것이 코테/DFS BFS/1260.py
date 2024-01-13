from collections import deque
n, m, v = map(int, input().split())
graph = [[] for _ in range(n+1)]
visited1 = [False] * n
visited2 = [False] * n
for i in range(m):
    a, b = map(int, input().split())
    graph[a].append(b)
print(graph)
def bfs(graph, start, visited):
    queue = deque([v])
    visited[start] = True
    while queue:
        pop = queue.popleft()
        print(pop, end=" ")
        for i in graph[pop]:
            if visited[i] == False:
                queue.append(i)
                visited[i] = True
def dfs(graph, start, visited):
    visited[start] = True
    print(start, end= " ")
    for i in graph[start]:
        if visited[i] == False:
            dfs(graph, i, visited)

dfs(graph, v, visited1)
#bfs(graph, v, visited2)
