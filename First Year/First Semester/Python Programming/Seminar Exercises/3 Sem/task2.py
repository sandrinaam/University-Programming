m = int(input())
n = int(input())
numbers = []
for i in range(m, n+1):
    if i % 4 == 0 and i % 3 == 0:
        continue
    if i % 3 == 0:
       numbers.append(i)
    elif i % 4 == 0:
        numbers.append(i)
print(numbers)




    
