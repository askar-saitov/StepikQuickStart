import sys

input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

best = arr[0]
acc = 0
for i in range(n):
    acc = max(arr[i], acc+arr[i])
    best = max(best, acc)

print(best)




'''
4
5 4 -10 4
===
9

'''