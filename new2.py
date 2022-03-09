a=input("enter a string")
a=list(a)
v=['a','e','i','o','u','A','E','I','O','U']
s=[i for i in a if i in v]
print(s)