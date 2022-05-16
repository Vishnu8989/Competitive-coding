a = int(input())


def solve():
    n = int(input())
    l = []
    for i in range(n):
        l.append(input())
    l1= []
    for i in l:
        l1.append("".join(sorted(i)))
    print(l)
    print(l1)

for i in range(a):
    print(solve())
