import math
n = int(input ('enter n: '))
c = int
s = int
while True:
    s=0
    while n >= 10:
        c = n % 10
        n = n // 10
        s = s + c
    s = s + n
    n = s
    if n<10:
        break
print("s:", s)

