import sys
input = sys.stdin.readline

def check(d):
    l = -1
    r = n
    while l+1 < r:
        mid = (l+r) // 2
        if a[mid] == d:
            return "YES"
        if a[mid] < d:
            l = mid
        else:
            r = mid
    return "NO"

n, m = map(int, input().split())
a = list(map(int, input().split()))
for _ in range(m):
    print(check(int(input())))
