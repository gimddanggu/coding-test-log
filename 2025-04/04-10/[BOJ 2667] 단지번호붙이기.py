import sys

input = sys.stdin.readline # 입력받는 방법을 까먹었다..
n = int(input())

grid = [[] for _ in range(n)]
count = 0   # 단지 수 카운트 할 변수
danzi = []
# gird 초기화
for i in range(n):
    line = input().strip()
    for l in line:
        grid[i].append(int(l))
        # print(grid[i])

print(grid)

# 4방향 설정
dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]


stack = []
stack.append((0, 0))


while(stack):
    x, y = stack.pop()
    # 방향 검사
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]

        # grid 범위 안에 있는 경우만
        if 0 <= nx < n and 0 <= ny < n:
            if grid[ny][nx] == 0:
                continue;

            if grid[ny][nx] == 1:   # 갈 수 있는 노드
                grid[ny][nx] = 0    # 방문 표시
                stack.append((nx, ny))
                count += 1          # 집 개수 카운트

danzi.append(count)




print(count)
print(danzi)
print(grid)