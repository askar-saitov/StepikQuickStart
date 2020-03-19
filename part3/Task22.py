n = int(input())
a = [0]+list(map(int,input().split()))

# 0 1 2 3 4 5

b = [0]*(n+1)
b[0] = 0
b[1] = a[1]
if n > 1:
    b[2] = b[1]+a[2]
if n > 2:
    b[3] = max(b[2],b[0]) + a[3]
if n > 3:
    b[4] = max(b[3],b[1]) + a[4]
for i in range(5,n+1):
    b[i] = max(b[i-1],b[i-3],b[i-5]) + a[i]

print(b[n])