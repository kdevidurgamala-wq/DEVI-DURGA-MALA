Python 3.13.12 (tags/v3.13.12:1cbe481, Feb  3 2026, 18:22:25) [MSC v.1944 64 bit (AMD64)] on win32
Enter "help" below or click "Help" above for more information.
a=True
b=Flase
Traceback (most recent call last):
  File "<pyshell#1>", line 1, in <module>
    b=Flase
NameError: name 'Flase' is not defined. Did you mean: 'False'?
a=True
b=False
print(a and b)
False
print(a or b)
True
print( not a)
False
a=7
b=5
print(a&b)
5
print(a|b)
7
print(a^b)
2
print(~a)
-8
print(a<<2)
28
print(a>>2)
1
print(b<<2)
20
printf(b>>2)
Traceback (most recent call last):
  File "<pyshell#16>", line 1, in <module>
    printf(b>>2)
NameError: name 'printf' is not defined. Did you mean: 'print'?
print(b>>2)
1
print(a<<b)
224
print(a>>b)
0
print(b<<a)
640
print(b>>a)
0
a=5
b=8
>>> c=5
>>> print(a is c)
True
>>> print( a is b)
False
>>> print(b is c)
False
>>> a=[1,2,3,4]
>>> b=[2,3,4,5]
>>> print(1 in a)
True
>>> print(1 in b)
False
>>> print(3 in b)
True
>>> print(6 not in a)
True
>>> print(1 not in b)
True
>>> print( 5 in a)
False
>>> print(4 in a)
True
>>> a=4
>>> b=6
>>> print(4 is a)
True
>>> print(5 is not b)
True
>>> print(2 is a)
False
>>> print(6 is not b)
False
