import sys 
input = sys.stdin.readline

n = int(input())
arr = [0] * (n+1)
for i in range(n):
    f = i // 10
    s = i % 10
    num = 0
    if i <= 18:
        num = str(i) + "666" if str(i) + "666" < "666" + str(i) else "666" + str(i)
        num = int(num)
        print(num)
    if i > 18:
        n1 = int(str(f) + str(i) + "666" )
        n2 = int(str(f) + "666" + str(i))
        n3 = int("666" + str(f) + str(i))
        num = max(n1, n2, n3)

    arr[i] = num

print(arr)