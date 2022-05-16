a = int(input())

def solve():
    n = int(input())
    l1 = [int(x) for x in input().split()]
    d = {}
    for i in l1:
        if i in d.keys():
            d[i]+=1
            if d[i]==3:
                return i
        else:
            d[i] = 1
    return -1


for i in range(a):
    print(solve())