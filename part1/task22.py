n = int(input())

lst = list(map(int, input().strip().split()[:n]))

mx = max(lst)

for i in range(n):
    if lst[i] == mx:
        print(i+1)
        break