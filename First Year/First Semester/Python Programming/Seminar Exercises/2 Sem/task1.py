m = int(input())
n = int(input())
new_number =1

for i in range(m, n+1):
    if i % 3 == 0 or i % 4 == 0:
        new_number *= i
print(new_number)


