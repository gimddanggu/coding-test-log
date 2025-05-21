import sys
input = sys.stdin.readline

n1 = int(input())
arr1 = list(map(int, input().split()))

n2 = int(input())
arr2 = list(map(int, input().split()))


arr1.sort()

def binary_search(arr, target):
    start, end = 0, len(arr)-1
    count = 0
    while(start < end):
        print(1)
        mid = (start + end) // 2

        if arr[mid] == target:
            count += 1
            if mid < len(arr)-1:
                mid += 1
        
        elif arr[mid] > target:
            end = mid - 1
        elif arr[mid] < target:
            start = mid + 1

    return count

print(binary_search(arr1, 10), end='')