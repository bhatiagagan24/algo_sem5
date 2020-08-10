

import numpy as np
import random
import time
import matplotlib.pyplot as plt
def partition(a , p , r):
    x = a[r]
    i = p - 1
    for j in range(p,r):
        if a[j] <= x:
            i = i + 1;
            c = a[i]
            a[i] = a[j]
            a[j] = c
    a[i+1], a[r] = a[r], a[i+1]
    return i+1



def quicksort(a, p, r):
    if p<r:
        q = partition(a, p, r)
        quicksort(a,p,q-1)
        quicksort(a,q+1,r)
        
time_list = []
elem = []
for m in range(0,10000):
    a = np.random.randint(0,100000, m)
    p = len(a)
    elem.append(p)
    start = time.time()
    quicksort(a,0,p-1)
    # print(a)
    end = time.time()
    time_list.append(end-start)

    
elem.sort()
plt.plot(elem, time_list, '.')
