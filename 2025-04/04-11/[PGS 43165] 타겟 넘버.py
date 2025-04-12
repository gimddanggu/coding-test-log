from collections import deque

# 테스트 케이스
numbers = [4, 1, 2, 1]
target = 4


from collections import deque

numbers = [4, 1, 2, 1]
target = 4

count = 0

def bfs(index, total):
    # 종료 조건 
    if index == len(numbers):
        if total == target:
            count += 1
            return
        return
    
    bfs(index+1, total + numbers[index])
    bfs(index+1, total - numbers[index])



bfs(0, 0)
print(count)