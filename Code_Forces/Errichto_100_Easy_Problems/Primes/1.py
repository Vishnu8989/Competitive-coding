import math
from pickle import TRUE

a = int(input())
b = a**.5
peri = 0
if b==round(b):
    peri = 4*b
else:
    while TRUE:
        if (a%(round(b))==0):
            temp = a/round(b)
            peri = (temp + round(b))*2
            break
        b-=1
print(int(peri))