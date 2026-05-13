import random

count = int(input())

numbers = []
for i in range(count):
    num = random.randint(1, 100)
    numbers.append(num)
even_numbers = []
odd_numbers = []
for num in numbers:
    if num % 2 == 0:
        even_numbers.append(num)
for num in numbers:
    if num % 2 == 1:
        odd_numbers.append(num)

p1 = sorted(even_numbers , reverse=True)
p2 = sorted(odd_numbers , reverse=False)
print(p1 + p2)





