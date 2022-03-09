a=input("enter a string")
a=list(a)
first=a[0]
for x,i in enumerate(a):
    if i==first and x!=0:
        a[x]='$'
newstring=''
for i in a:
    newstring+=i
print("the string modified is",newstring)
