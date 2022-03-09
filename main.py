a=input("enter the numbers").split(",")
a=map(int,a)
v=[i for i in a if i > 0]
print(v)