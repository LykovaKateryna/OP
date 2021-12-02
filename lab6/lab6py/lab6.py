import math
def g(x):
	l = float(1) #(2k+1)!
	t = float(1) #(3k)!
	n = float(0) #чисельник
	m = float(0) #знаменник
	for k in range (0,10):
		if (k==0):
			l=1
		else:
			l = l * (2 * k) * (2 * k + 1)
		n = n+(x**(2 * k + 1) / l)
	for k in range (0,10):
		if (k==0):
			t=1
		else:
			t = t = t * (3 * k - 2) * (3 * k - 1) * 3 * k
		m = m + (x**(3 * k) / t)
	g = n/m
	return g
y = float (input ('enter y: '))
s = (1.7 * g(0.25) + 2 * g(1 + y)) / (6 - g(y**2) - 1)
print("s= ", s)