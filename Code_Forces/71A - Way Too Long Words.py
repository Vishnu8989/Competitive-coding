a = int(input())


def solve() -> str:
    str1 = input()
    l = len(str1)
    retstr = ""
    if l <= 10:
        retstr = str1
    else:
        retstr = str1[0] + str(l-2) + str1[-1]
    return retstr


while(a > 0):
    ret = solve()
    print(ret)
    a -= 1
