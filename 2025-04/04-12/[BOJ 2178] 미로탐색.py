from collections import deque
import sys

input = sys.stdin.readline

n, m = map(int, input().split())
# grid 초기화
grid = [list(map(int, input().strip())) for _ in range(n)]

start = (0, 0)
end = (n-1, m-1)
count = 1 # 시작지점으로 간 후에 시작이니깐

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]

que = deque()
que.append(start)

while(que):
    cx, cy = que.popleft()
    for i in range(4):
        nx = cx + dx[i]
        ny = cy + dy[i]

        if nx == m-1 and ny == n-1:
            break;

        # 미로 안의 범위 체크
        if (0 <= nx < m) and ( 0 <= ny < n):
            # 갈 수 없는 영역
            if grid[ny][nx] == 0:
                continue;
            else:
                que.append((nx, ny))
                grid[ny][nx] = 0  # 1-> 0 으로 방문 표시
                
                count += 1


print(count)