value1=int(input("enter first number"))
value2=int(input("enter second number"))
value3=int(input("enter third number"))
if (value1 >= value2) and (value1 >= value3):
    print(value1,"is greater")
elif(value2 >= value1) and (value2 >= value3):
    print(value3,"is greater")
else:
    print(value3,"is greater")