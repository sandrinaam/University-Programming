def fib():
    n1 = n2 = 1
    print(n1,n2,end = '')
    for i in range(10-2):
     n1,n2 = n1+n2, n1
     print(n1,end=" ")

def fib1(n):
    n1 = n2 = 1
    print(n1,n2,end=" ")
    for i in range(n-2):
        print(n2,end=" ") #refactoring premahvane na izlishni elementi
        n1,n2 = n1+n2, n1
    print()

def fib2(limit):
    n1 = n2 = 1
    while (n2<=limit):
        print(n2,end=" ")
        n1,n2 = n1+n2, n1

def fib11(count):
    n1 = n2 = 1
    fiblist = []
    for i in range(count):
        fiblist.append(n2)
        n1,n2 = n1+n2, n1
    return fiblist



def fib22(limit):
    n1 = n2 = 1
    fiblist = []
    while (n2<=limit):
        fiblist.append(n2)
        n1,n2 = n1+n2, n1
    return fiblist

def fib222(limit=1000):
    n1 = n2 = 1
    fiblist = []
    while (n2<=limit):
        fiblist.append(n2)
        n1,n2 = n1+n2, n1
    return fiblist

fib()
fib1(20)
fib1(25)
print(type(fib),fib,fib())
fib2(100)
fib2(13)
print(fib22(100))
print(fib222())
print(fib222(10)) #predefinirane na funkcii

