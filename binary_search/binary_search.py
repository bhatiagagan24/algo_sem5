def binary_searc(a_i, li_elem, f):
    upmost_elem = a_i - 1
    lmost_elem = 0
    # mid_elem = 0
    while(upmost_elem >= lmost_elem):
        mid_elem = int((upmost_elem + lmost_elem) / 2)
        if(li_elem[mid_elem] > f):
            upmost_elem = mid_elem - 1
        elif(li_elem[mid_elem] < f):
            lmost_elem = mid_elem + 1
        elif(li_elem[mid_elem] == f):
            return mid_elem
    return -1


def main_prog():
    a = input('Enter no of elements')
    a_i = int(a)
    li_elem = []
    for x in range(a_i):
        m = input()
        m_i = int(m)
        li_elem.append(m_i)
    li_elem.sort()
    print(li_elem[1])
    f = input('enter element to be found')
    f_i = int(f)
    result1 = binary_searc(a_i, li_elem,f_i)
    print(result1)


main_prog()