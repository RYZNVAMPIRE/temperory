new=int(input("enter no of rpws"))
for i in range(0,new):
    for j in range(0,i+1):
        print("*",end=" ")
    print("\n")
while new > 0:
    for j in range(1,new):
        print("*",end=" ")
    print("\n")

    new= new-1