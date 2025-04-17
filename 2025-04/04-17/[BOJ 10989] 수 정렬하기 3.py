import sys

input = sys.stdin.readline

n = int(input())
arr = [int(input()) for v in range(n)]
print(arr)
print(*sorted(arr), sep='\n')