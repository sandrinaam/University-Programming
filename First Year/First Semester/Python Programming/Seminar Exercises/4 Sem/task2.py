def checkPerfectNum(num):
    divider = 0
    for x in range(1, num):
     if num % x == 0:
        divider += x
        continue
    if divider == num:
        return True
    else:
        return False

num = 28
print(checkPerfectNum(num))
