import sys
input = sys.stdin.readline

def getFirstOne(n, m, a):
    l = -1
    r = n
    step = 0
    while l+1 < r:
        mid = (l+r) // 2
        if a[step] == 0:
            l = mid
        else:
            r = mid
        step += 1
        if step == m:
            break
    return r

n, m = map(int, input().split())
a = list(map(int, input().split()))
print(getFirstOne(n, m, a))
