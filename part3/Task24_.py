# не проходит часть тестов - переполнение стека вызова рекурсивных функций
# нужно делать динамику

import sys
sys.setrecursionlimit(20000)

def f(i):
    if i<0: return 0
    if i==0: return 1
    if z[i] != -1: return z[i]
    if a[i] == 1:
        return 0
    else:
        z[i] = (f(i-1) + f(i-2) + f(i-3)) % 1000000007
        return z[i]

n = int(input())
z = [-1]*(n+1)
a = [0] + list(map(int, list(input())))

print(f(n))

'''
Sample Input 1:
8
01100010
Sample Output 1:
3
Sample Input 2:
8
00000001
Sample Output 2:
0
Sample Input 3:
8
00111000
Sample Output 3:
0
'''
