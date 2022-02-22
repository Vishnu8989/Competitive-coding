global my_dict
my_dict = {}
global my_dict_2
my_dict_2 = {}  
def make_dict():
    likes = input().split()
    dislikes =  input().split()
    likes = likes[1:]
    dislikes = dislikes[1:]
    for i in likes:
        if i in my_dict.keys():
            my_dict.update({i:my_dict[i]+1})
        else:
            my_dict.update({i:1})

    for i in dislikes:
        if i in my_dict_2.keys():
            my_dict_2.update({i:my_dict_2[i]+1})
        else:
            my_dict_2.update({i:1})

    
            
def make_dict2():
    likes = input().split()
    dislikes =  input().split()
    likes = likes[1:]
    dislikes = dislikes[1:]
    for i in likes:
        if i in my_dict.keys():
            my_dict.update({i:my_dict[i]+1})
        else:
            my_dict.update({i:1})

    for i in dislikes:
        if i in my_dict.keys():
            my_dict.update({i:my_dict[i]-1})
        else:
            my_dict.update({i:-1})

a = int(input())

for i in range(a):
    make_dict()

print("Likes : ",my_dict)
print("Dis Likes : ",my_dict_2)
