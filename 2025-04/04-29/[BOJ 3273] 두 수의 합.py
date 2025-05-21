import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))
target = int(input())
count = 0

arr.sort()

# 투 포인터 풀이
# s, e = 0, len(arr)-1
# while(s < e):
#     if arr[s] + arr[e] == target:
#         count +=1
#         s += 1
#         e -= 1

#     elif arr[s] + arr[e] < target:
#         s += 1
    
#     elif arr[s] + arr[e] > target:
#         e -= 1

# print(count)

# hash set 풀이
arr_set = set(arr)

for i in range(len(arr_set) // 2):
    if (target - arr[i]) in arr_set :
        count += 1
print(count)
# print(count)