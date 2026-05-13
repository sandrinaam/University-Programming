n = int(input())

if n % 5 == 0:
    print(True)
elif (n //10) %2 == 0:
    print(True)
else:
    print(False)
