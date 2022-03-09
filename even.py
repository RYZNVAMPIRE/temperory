list1=input("enter the numbers").split(",")
list1=map(int,list1)
for i in list1:
    if i%2==0:
        print(i)