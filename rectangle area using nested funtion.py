#area of rectangle
def main():
    l,b=get_values()
    area=calculate_area(l,b)
    display(area)
def get_values():
    return 5,3
def calculate_area(l,b):
    return l*b
def display(area):
    print("area:",area)
main()
#factorial recursion
n=int(input("enter n value:"))
def fact(n):
    if n==1:
        return 1
    else:
        return n*fact(n-1)
print(fact(n))    
#recursion fibbnacci
n=int(input("enter n value:"))
def fibnocci(n):
    if n==1:
        return 1
    elif n==0:
        return 0
    else:
        return fibnocci(n-1)+fibnocci(n-2)
print(fibnocci(n))
#maping
nums=[1,2,3,4,5,6]
print(list(map(lambda x:x*2,nums)))
#filter
num=[2,3,5,4,8,9,10]
print(list(filter(lambda x:x%2!=0,nums)))
#reduce
from functools import reduce 
l=[1,2,3,4,5]
print(reduce(lambda x,y:x+y,l))















