

## Program for Linear Search


def linear_search(a , b):
    c = len(a)
    m = 0
    for m in range(0,c):
        if a[m] == b:
            return m

    return 1

def main_search():
    a = [10, 20, 30, 40, 50, 60]
    b = 50
    c = linear_search(a,b)
    if c==1:
        print('element not found')
    elif c!=1:
        print('element found at position')
        print(c)






# b = 6
# m = [100000, 20448, 44]
# linear_search(m , b)

main_search()