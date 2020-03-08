import sys

input = sys.stdin.readline

n, m = map(int, input().split())
arr = input().split()

z = [0] * (n + 1)
z[0] = 0
acc = 0
for i in range(n):
    acc += int(arr[i])
    z[i+1] = acc

result = []
for i in range(m):
    x, y = input().split()
    result.append(str(z[int(y)] - z[int(x)-1]))

print("\n".join(result))