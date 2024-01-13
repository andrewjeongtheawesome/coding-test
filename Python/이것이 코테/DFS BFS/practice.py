from collections import deque
def dfs(graph, v, visited):
    visited[v] = True
    #print(v, end=" ")
    for i in graph[v]:
        print(i)
        if visited[i] == False:
            dfs(graph, i, visited)

queue = deque()
def bfs(graph, v, visited):
    queue.append(v)
    visited[v] = True
    print(v, end=" ")
    for j in graph[queue.pop()]:
        bfs(graph, v, visited)
def bfs2(graph, v, visited):
    queue = deque([v])
    visited[v] = True
    while queue:
        pop = queue.popleft()
        print(pop, end=" ")
        for i in graph[pop]:
            if visited[i] == False:
                queue.append(i)
                visited[i] = True
graph = [
    [],
    [2, 3, 8],
    [1, 7],
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7]
]
#그래프 인접 행렬로 그리는 법
#0번 노드->시작
#1번 노드->2,3,8번 노드와 연결되어 있음
#2번 노드...

visited = [False] * 9#노드 8개 / 전부 비 방문 처리 / 노드 번호가 1~8이라 앞에 하나 비우고 9개 생성
bfs2(graph, 1, visited)


