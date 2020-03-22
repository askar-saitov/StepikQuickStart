# такое решение не проходит по времени
# так как сложность O(n*k)

n, k = map(int, input().split())
z = [0] + list(map(int, list(input())))
d = 1000000007

a = [1] + [0] * n

for i in range(1, n + 1):
    if z[i] == 1:
        a[i] = 0
    else:
        for j in range(1, k + 1):
            if (i-j >= 0):
                a[i] += a[i - j]
        a[i] %= d

print(a[n])