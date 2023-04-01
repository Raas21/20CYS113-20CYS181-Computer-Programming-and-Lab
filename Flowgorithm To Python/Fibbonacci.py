Python 3.11.2 (tags/v3.11.2:878ead1, Feb  7 2023, 16:38:35) [MSC v.1934 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>>> print("Please enter the value of n")
... n = int(input())
... i = 0
... l = 1
... print(i)
... print(l)
... k = 0
... j = 3
... while j <= n:
...     k = l + i
...     print(k)
...     i = l
...     l = k
