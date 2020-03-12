import sys
input = sys.stdin.readline

def getFirstOne(n, z):
    l = -1
    r = n
    step = 0
    while l+1 < r:
        step += 1
        mid = (l+r) // 2
        if mid < z:
            l = mid
        else:
            r = mid
    return step

n, m = map(int, input().split())

for _ in range(m):
    z = int(input())
    print(getFirstOne(n, z))