import sys
input = sys.stdin.readline

n = int(input())
set_string = set()
for _ in range(n):
    set_string.add(input().strip())

res = sorted(set_string, key=lambda x : (len(x), x))
print(*res, sep='\n')