import random

count = int(input())
matrix = []

for i in range(count):
    row = []
    for x in range(count):
        row.append(random.randint(10, 100))
    matrix.append(row)
for row in matrix:
    del row[0]
 print(row)
