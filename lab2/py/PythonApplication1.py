import math
a=float(input ('enter a: '))
x=float
if a>0:
    x = -abs(a - 1) / (2*a)
else:
    x = math.log(1 + pow(a, 2)) / 2
print(x)
