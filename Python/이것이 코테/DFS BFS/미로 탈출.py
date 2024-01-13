from collections import deque
a, b = map(int, input().split())
array = [list(map(int, input())) for _ in range(a)]

dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
def bfs(n, m):
    queue = deque()
    queue.append((n, m))
    while queue:
        x, y = queue.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if nx < 0 or ny < 0 or nx >= a or ny >= b:
                continue
            if array[nx][ny] == 0:
                continue
            if array[nx][ny] == 1:
                array[nx][ny] = array[x][y] + 1
                queue.append((nx, ny))
    return array[a - 1][b - 1]

print (bfs(0, 0))