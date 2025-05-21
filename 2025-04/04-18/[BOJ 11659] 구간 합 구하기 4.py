import sys

input = sys.stdin.readline

n, m = map(int, input().split())
arr = list(map(int, input().split()))

arr_range = [tuple(map(int, input().split())) for _ in range(m)]
# for s, e in arr_range:
#     print(sum(arr[s-1:e]))
sum_arr = [0, arr[0]]
sum_arr.append(arr[0] + arr[1])


for i in range(2, n):
    sum_arr.append(sum_arr[i] + arr[i])

# print(sum_arr)

for s, e in arr_range:
    # print(sum_arr[e])
    # print(sum_arr[s])
    print(sum_arr[e] - sum_arr[s-1])
