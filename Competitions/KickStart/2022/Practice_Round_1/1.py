a = int(input())
vo = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
def solve(last):
    if last=='y' or last=='Y':
        return "nobody"
    else:
        if last in vo:
            return "Alive"
        else:
            return "Bob"

i=0
while(a>0):
    a-=1
    i+=1
    name = input()
    print("Case #{}: {} is ruled by {}.".format(i,name,solve(name[-1])))
    print("Case #{}: {} is ruled by {}.".format(i,name,solve(name[-1])))
    
# Case #1: Mollaristan is ruled by Bob.
# Case #2: Auritania is ruled by Alice.
# Case #3: Zizily is ruled by nobody.
