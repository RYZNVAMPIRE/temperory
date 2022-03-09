a=input("enter a sentence").split()
v=[]
for i in a:
    if(i not in v):
        print(i,a.count(i))
        v.append(i)