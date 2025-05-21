import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

newArr = [(i, arr[i-1]) for i in range(1, n+1)]

print(newArr)
newArr.sort(key = lambda x:x[1])
# 제일 시간이 적게 걸리는 사람이 앞에 있으면 최소 시간이 소요되는 거 같다.
# 누적 합 구하기
prexSum = [0]
for i in range(n):
    prexSum.append(prexSum[i] + newArr[i][1])
# print(newArr)
# print(prexSum)
print(sum(prexSum))