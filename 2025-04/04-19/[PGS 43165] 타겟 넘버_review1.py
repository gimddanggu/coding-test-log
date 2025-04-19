numbers = [4, 1, 2, 1]
target = 4
nSum = 0
count = 0
count_arr = [0]

def dfs(nSum, idx):
    global count
    # 종료조건

    if idx == len(numbers):
        if nSum == target:
            count += 1

            return count
        return count
    
    dfs(nSum + numbers[idx], idx+1)
    dfs(nSum - numbers[idx], idx+1)

def dfs1(nSum, idx):

    if idx == len(numbers):
        if nSum == target:
            count_arr[0] += 1

            return
        return
    
    dfs1(nSum + numbers[idx], idx+1)
    dfs1(nSum - numbers[idx], idx+1)

def dfs2(nSum, idx):

    if idx == len(numbers):
        if nSum == target:
            return 1
        return 0
    
    return dfs2(nSum + numbers[idx], idx+1) + dfs2(nSum - numbers[idx], idx+1)



# sol1 global count
dfs(nSum, 0)
print(count)

# sol2 count list 생성
dfs1(nSum, 0)
print(count_arr[0])

# sol3 return 값 합산
print(dfs2(nSum, 0))



    