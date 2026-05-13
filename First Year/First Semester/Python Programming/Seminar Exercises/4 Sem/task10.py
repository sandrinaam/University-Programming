def CheckPrime(num):
    if num % 2 == 0 or num % 3 == 0:
        if num % 2 == 0 and num % 3 == 0:
            return True
    else: return False

num = int(input())
for i in range(num+1):
    if CheckPrime(i):
        CheckPrime(num- i)
        break
