import sys
input = sys.stdin.readline
a = int(input())
# 이분 탐색 코드는 암기하는 것이 좋다.
# 이분 탐색시 인덱스 번호를 잘 고려하여 사용해아한다.
def binary_search(array, target, start, end):
    while start <= end:
        mid = (start + end) // 2
        if array[mid] == target:
            return True
        elif array[mid] > target:
            end = mid - 1
        else:
            start = mid + 1
    return None

for _ in range(a):
    f = int(input())
    first = list(map(int, input().split()))
    first.sort(key = lambda x:x)
    s = int(input())
    second = list(map(int, input().split()))
    for items in second:
        if(f == 1):
            if items in first:
                print(1)
            else:
                print(0)
        else:
            if binary_search(first, items, 0, s - 1) == True:
                print(1)
            else:
                print(0)