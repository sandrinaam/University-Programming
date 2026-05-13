sum = 0
for num in range(1, 51):
    if num % 2 == 0 or num % 3 == 0:
        if num % 2 ==0 and num % 3 == 0:
            sum += 0
        else:
            sum += num
print(sum)

