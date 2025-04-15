def solution(array, commands):
    result = []
    for i, j, k in commands:
        result.append(sorted(array[i-1:j])[k-1])
    
    # print(result)
    return result

# 테스트 케이스
array = [1, 5, 2, 6, 3, 7, 4]
commands = [[2, 5, 3], [4, 4, 1], [1, 7, 3]]

print(solution(array, commands))