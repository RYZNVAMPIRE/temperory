n1=int(input("enter the noumber of values in dict 1"))
dict1={}
dict2={}
for i in range(0,n1):
    key=input("enter the key:")
    value=input("enter the value:")
    dict1[key]=value
print(dict1)
n2=int(input("enter the noumber of values in dict2"))
for i in range(0,n2):
    key=input("enter the key:")
    value=input("enter the value:")
    dict2[key]=value
print(dict2)
dict1.update(dict2)
print(dict1)