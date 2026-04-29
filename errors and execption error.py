#file not found error: 
try:
    f=open("studentregistration.txt","r")
except FileNotFoundError:
    print("the file not found")
finally:
    print("code executed finally")
#name error:
a=10
b=80
print(a+B)
#type error:
print("age:"+20)
#zero division error:
a=12
b=0
print(a/b)
#index error :
list=[1,2,3,4,5]
print(list[7])
#key error:
dis={'a':"LUCKY",'b':"GAYATRI"}
print(dis['age'])
    
