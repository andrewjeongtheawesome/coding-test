a, b = map(int, input().split())
graph = [list(map(int, input())) for _ in range(a)]
def dfs(n, m):
        if n < 0 or n >= a or m < 0 or m >= b:
            return False
        else:
            if graph[n][m] == 0:
                graph[n][m] = 1
                dfs(n, m-1)
                dfs(n+1, m)
                dfs(n-1, m)
                dfs(n, m+1)
                return True
        return False

result = 0;
for i in range(a):
    for j in range(b):
        if dfs(i, j) == True:
            result += 1

print(result)