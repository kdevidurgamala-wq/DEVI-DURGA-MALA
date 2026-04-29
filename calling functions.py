#without arguments and without return values
def sum():
    a=10
    b=20
    add=a+b
    print(add)
sum()
#with arguments and without return values
def sum(a,b):
    c=a+b
    print(c)
sum(10,20)
#without argument and with return value
def sum():
  a=10
  b=20
  return a+b
print(sum())
#with argument and with return value
def sum(a,b):
    c=a+b
    return c
add=sum(10,20)
print(add)
#return statement
def sum(a,b):
    return a+b
print(sum(10,20))
#using f string
def details(name, age):
    print(f"My name is {name} and I am {age} years old")
details("Devi", 18)
