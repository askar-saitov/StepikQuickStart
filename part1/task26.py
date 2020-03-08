# не пройдёт один тест

g = int(input())
m = 98765431

a = set()
r = -1
i = g
while i < m:
    i += 1
    s = str(i)
    if s.find('0') > -1:
        continue
    if s.find('2') > -1:
        continue
    a = set(list(s))
    if len(a) == len(s):
        r = i
        break

print(r)
