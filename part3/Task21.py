n = int(input())
a = [0]+list(map(int,input().split()))

b = [0]*(n+1)
b[0]=0; b[1]=a[1]
for i in range(2,n+1):
    b[i] = max(b[i-1],b[i-2]) + a[i]

print(b[n])