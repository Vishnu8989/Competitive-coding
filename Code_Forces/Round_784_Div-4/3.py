a = int(input())

def allsame(l):
    for i in l:
        if l.count(i)==len(l):
            return 1
        else:
            return 0

def solve():
    n = int(input())
    l = [int(x) for x in input().split()]
    l1 = l[::2]
    l2 = l[1::2]
    l1 = list(map(lambda x:x%2,l1))
    l2 = list(map(lambda x:x%2,l2))
    if allsame(l1) and allsame(l2):
        return "YES"
    else:
        return "NO"

for i in range(a):
    print(solve())