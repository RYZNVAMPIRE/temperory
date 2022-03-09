l = input("Enter the list of keys and values").split()
d = dict()
for i,x in enumerate(l):
    if i%2==0:
        d[x]=l[i+1]
print("In ascending order: ",sorted(d))
print("In descending order: ",sorted(d,reverse=True))