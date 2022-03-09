string=input("enter the string")
a=list(string)
a[0],a[-1]=a[-1],a[0]
string1="".join(a)
print(string1)