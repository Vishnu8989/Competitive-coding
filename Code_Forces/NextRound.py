n, k = input().split()
n = int(n)
k = int(k)
list1 = input()
list1 = list1.split()
tot = 0
num_list = []
for i in list1:
    num_list.append(int(i))
for i in num_list:
    if i >= num_list[k-1] and i > 0:
        tot += 1
print(tot)
