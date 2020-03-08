# не пройдут два последних теста - тут нужно ускорить чтение

import array

n, m = map(int, input().split())
a = input().split()

z = array.array('Q', [])
z.append(0)
for i in range(n):
    z.append(z[i] + int(a[i]))

for i in range(m):
    x, y = input().split()
    print(z[int(y)] - z[int(x)-1])