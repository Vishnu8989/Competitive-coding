num = int(input())
a, b, c = 0, 0, 0
final = 0
while(num > 0):
    a, b, c = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    if(a+b+c) >= 2:
        final += 1
    num -= 1
print(final)
