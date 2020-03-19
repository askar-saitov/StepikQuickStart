'''
Во входном файле заданы два целых положительных числа a и b, не превосходящие 10^18. Если их наименьшее общее кратное (то есть наименьшее целое положительное число, делящееся и на a, и на b) не превосходит 10^18, выведите его значение. В противном случае выведите -1.
Sample Input 1:
4 6
Sample Output 1:
12
Sample Input 2:
12 7
Sample Output 2:
84
Sample Input 3:
1000000000000000000 999999999999999999
Sample Output 3:
-1
'''
# Использовано свойство НОД(a,b)*НОК(a,b)=a*b
a, b = map(int, input().split())

def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)

r = a*b // gcd(a,b)
if r > 10**18:
    print(-1)
else:
    print(r)
	
'''
ещё вариант
import math
a, b = map(int, input().split())
r = a * b // math.gcd(a, b)
print(r if r <= 10**18 else -1)
'''