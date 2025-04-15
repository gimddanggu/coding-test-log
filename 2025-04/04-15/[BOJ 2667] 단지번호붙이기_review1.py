## 입력
n = 7
inputG = '''0110100
0110101
1110101
0000111
0100000
0111110
0111000'''



def DFS(y, x, grid):
    stack = [(x, y)]
    count  = 1
    while(stack):
        cx, cy = stack.pop()
        dx = [1, -1, 0, 0]
        dy = [0, 0, 1, -1]

        for i in range(4):
            nx = cx + dx[i]
            ny = cy + dy[i]

            if 0 <= nx < n and 0 <= ny < n:
                if grid[ny][nx] == 1:
                    stack.append((nx, ny))
                    count += 1
                    grid[ny][nx] = 0
            
    return count

grid = [list(map(int, row)) for row in inputG.strip().splitlines()]

res = []

for i in range(7):
    for j in range(7):
        if grid[i][j] == 1:
            grid[i][j] = 0
            print(i, j)
            res.append(DFS(i, j, grid))

print(len(res))
res.sort()
for r in res:
    print(r)




print(grid)
    