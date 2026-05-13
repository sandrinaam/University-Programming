import random
from sys import maxsize

def func1():
    lst = []
    count_num = random.randint(1, 10)
    min_num = maxsize
    max_num = -maxsize
    sum_num = 0
    count1 = 0
    avg_num = 0
    for _ in range(count_num):
        lst.append(random.randint(1, 100))
    for char in lst:
        if char <= min_num:
            min_num = char
        if char > max_num:
            max_num = char
    for num in lst:
        while len(lst) > 0:
            sum_num+= num
            count1 += 1
            del lst[0]
        avg_num = sum_num / count1

        return [min_num, max_num, avg_num]

print(func1())
