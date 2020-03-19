# достаточно решения "в лоб"
# только перебор ограничить нечётными и идти до корня

n = int(input())

if n < 3:
    r = 1
elif n%2 == 0:
    r = 0
else:
    r = 1; mx = int(n**.5)
    for i in range(3, mx, 2):
        if n%i == 0:
            r = 0
            break

print(r)