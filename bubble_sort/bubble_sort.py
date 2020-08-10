

import random
import numpy as np

def bubble_sort(a):
    b = len(a)           #b stores length of array a
    for x in range(b):
        check_pt = False
        for y in range(b-x-1):
            if a[y] > a[y+1]:
                a[y], a[y+1] = a[y+1], a[y]
                check_pt = True
        if check_pt == False:
            break
    return a


def main_driver():
    # i = input('Enter no of inputs in list')
    # i_int = int(i)
    a = np.random.randint(0 , 100 , 20)
    print(a)
    i_int = len(a)
    # for z in range(i_int):
    #     inp = input()
    #     inp_1 = int(inp)
    #     a.append(inp_1)
    m = bubble_sort(a)
    print (m)


main_driver()