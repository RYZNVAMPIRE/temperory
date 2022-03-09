a=input("enter the numbers").split()
a=list(map(int,a))
for x,i  in enumerate(a):
    if(i>100):
        a[x]="over"
print(a)