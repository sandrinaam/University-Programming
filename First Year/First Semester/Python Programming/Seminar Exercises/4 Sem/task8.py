def findNok(a,b):
    for x in range(1,a*b):
        if x%a == 0 and x%b == 0:
            return x

a = 12
b = 24
print(findNok(a,b))


