a, b = map(int, input().split())

k = 0
def gcd(a, b):
    global k
    if b == 0:
        return a
    k += 1
    return gcd(b, a % b)

gcd(a,b)
print(k)