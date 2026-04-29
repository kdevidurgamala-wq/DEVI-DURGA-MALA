p=float(input("enter principle amount:"))
r=float(input("enter rate of intrest:"))
t=float(input("enter time (inyears):"))
amount=p*(1+r/100)**t
ci=amount-p
print("total amount=",amount)
print("compound interest=",ci)
