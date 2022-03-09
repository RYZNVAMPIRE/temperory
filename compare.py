a=input("enter the values").split()
b=input("enter the value").split()
if(a==b):
        print("lists are equal")
else:
    print("list not equal")
if(len(a)==len(b)):
    print("the length are same")
else:
    print("length are different")
for i in a:
    for j in b:
       if(i==j):
              print(i,"found in in both" )