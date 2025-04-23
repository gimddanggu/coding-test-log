import sys
input = sys.stdin.readline

n = int(input())
arr1 = list(map(int, input().split()))

n2 = int(input())
arr2 = list(map(int, input().split()))

# in 연산자 사용
# for e in arr2:
#     if e in arr1:
#         print(1)

#     else:
#         print(0)

# 이진탐색 방법 사용
arr1.sort()

def binarySearch(s, e, target, arr1):
    while(True):
        # arr1 = arr1[s:e+1]
        mid = (s + e) // 2
        if arr1[mid] == target:
            return 1
        
        elif arr1[mid] > target:
            e = mid-1
        else:
            s = mid+1

        if s > e:
            return 0
        
for e in arr2:
    print(binarySearch(0, n-1, e, arr1))