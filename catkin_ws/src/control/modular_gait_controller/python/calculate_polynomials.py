from numpy.lib.scimath import sqrt
from numpy.lib.type_check import isreal
from numpy.lib.ufunclike import isposinf
import numpy.polynomial as poly
import numpy as np
import matplotlib.pyplot as plt

Ttot = 2
amax = 4
Vrob = 1
dtot = 2

Tr_poly_coeffs = (-dtot -Ttot*Vrob, (2/3)*amax*Ttot, -4/3 + (8/9 - 4/15)*amax)

Tr_list = poly.Polynomial(Tr_poly_coeffs).roots()

print(Tr_poly_coeffs)
print(poly.Polynomial(Tr_poly_coeffs).coef)

print(Tr_list)
print(Tr_list[isreal(Tr_list)*(Tr_list>=0)])
Tr = Tr_list[isreal(Tr_list)*(Tr_list>=0)][0]

Th = Ttot - 2*Tr

a = -(2/3)*amax/(Tr**3)
b = (4/3)*amax/Tr
c = -Vrob

coeffs = (c, 0, b, 0, a)

t1 = np.linspace(0, Tr, 50)
t2 = np.linspace(Tr, Tr + Th, 100)
t3 = np.linspace(Tr + Th, Ttot, 50)
f = poly.Polynomial(coeffs)
f_int = f.integ()
x1 = f(t1)
x2 = np.array([f(Tr)]*t2.shape[0])
x3 = f(-t3 + Ttot)

t = np.concatenate((t1, t2, t3))
x = np.concatenate((x1, x2, x3))
print(t)
print(t.shape)
print(x.shape)

print(Tr)
print(Tr**2)

plt.plot(t, x)
plt.show()
