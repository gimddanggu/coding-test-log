import sys

input = sys.stdin.readline

n =  int(input())
arr = [input().split() for i in range(n)]
for i in range(n):
    arr[i].append(i)
    arr[i][0] = int(arr[i][0]) 

arr.sort()
arr.sort(ket=arr[0][2])
print(arr)