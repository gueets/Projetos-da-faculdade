import math
g = float(input('Digite valor para G:  '))
f = float(input('Digite valor para F: '))

d = math.sqrt((g**2)+(f**2))/(5*g*f)
print('\nEntradas:\ng: ', "%.3f" % g, '\nf:',"%.3f" % f)
print('\nSaída: \nD = ', "%.3f" %  d)