import numpy as np
import matplotlib.pyplot as plt
from scipy.interpolate import interp1d
from scipy.optimize import curve_fit

# ডেটা
x = np.array([1, 2, 3, 4, 5])
y = np.array([2.2, 4.1, 6.0, 8.1, 10.3])

# 🎯 Interpolation
f_interp = interp1d(x, y)
print("x=2.5 এর Interpolated মান:", f_interp(2.5))

# 🎯 Curve fitting
def model(x, a, b):
    return a * x + b

popt, _ = curve_fit(model, x, y)
a, b = popt
print("Curve fitting: y = {:.2f}x + {:.2f}".format(a, b))
