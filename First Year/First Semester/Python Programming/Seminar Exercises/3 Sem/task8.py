import random

count = int(input())
matrix = []

for i in range(count):
    row = []
    for x in range(count):
        row.append(random.randint(1, 10))
    matrix.append(row)
for row in matrix:
 print(row)
