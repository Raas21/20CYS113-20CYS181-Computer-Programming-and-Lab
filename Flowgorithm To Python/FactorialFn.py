Python 3.11.2 (tags/v3.11.2:878ead1, Feb  7 2023, 16:38:35) [MSC v.1934 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> def fact(a):
...     prod = 1
...     for i in range(a, t - 1, -1):
...         prod = prod * i
...     ans = prod
...     
...     return ans
... 
... # Main
... print("Enter the number for which the factorial to be found ")
... n = int(input())
... factorial = fact(n)
