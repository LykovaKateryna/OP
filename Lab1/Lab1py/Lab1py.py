import math
b=float(input ('enter b: '))
q=float(input ('enter q: '))
if abs(q)<1:
    print(b/(1-q))
else:
    print('Error')