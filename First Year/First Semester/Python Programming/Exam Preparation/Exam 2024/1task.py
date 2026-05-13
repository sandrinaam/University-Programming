#1
while True:
    try:
        n = int(input())
        if n <= 10 or n>= 50:
            raise ValueError('Number must be between 10 and 50')
        else:
            break
    except ValueError as e:
        print(e)

while True:
    try:
        a = int(input())
        if a < -2500 or a> -1300:
            raise ValueError('Number must be between -2500 and -1300')
        else:
            break
    except ValueError as e:
        print(e)

while True:
    try:
        b = int(input())
        if b < 1111 or b> 4444:
            raise ValueError('Number must be between 1111 or 4444')
        else:
            break
    except ValueError as e:
        print(e)

my_list1 = []
for i in range(n):
    while True:
        try:
            x = int(input())
            if x < a or x > b:
                raise ValueError('Number must be between a and b')
            else:
                my_list1.append(x)
                break
        except ValueError as e:
            print(e)
print(f'My first list is:{my_list1}')

#2
tens_four_five = 0
for x in my_list1:
    if x < 0:
        tens = abs(x)//10%10
        if tens % 5 == 0 or tens % 4 == 0:
            tens_four_five +=1
if tens_four_five == 0:
    print('There are no such numbers.')
else:
    print(f'There are {tens_four_five} such numbers.')

#3
sums= 0
counter = 0
for x in my_list1:
    if 10<= x <= 99:
        if x % 2 == 0:
            sums +=x
            counter+=1
if counter > 0:
    print(f'The average is {sums/counter}')
else:
    print('The operation is not possible')

#4
my_list2 = []
for x in my_list1:
    if 100 <= abs(x) <= 999:
        if x % 3 == 0:
            my_list2.append(x)
if len(my_list2) == 0:
    print('My second list is empty')
else:
    print(f'My second list is:{my_list2}')

#5
count_odd = 0
for i in range(0,len(my_list2),2):
    if my_list2[i] % 2 != 0:
        count_odd +=1
if count_odd > 0:
    print(f'There are {count_odd} such numbers.')
else:
    print('There are no such numbers.')

#6
for i in range(len(my_list2)):
    if i % 2 != 0:
        my_list2[i] = 13
if len(my_list2) > 0:
    print(f'My list is updated to:{my_list2}')
else:
    print('My list has only one element so the operation is not possible')

#7
if len(my_list2) > len(my_list1):
    my_list2.pop()
    my_list1.pop(0)
    print(f'My second list is updated to:{my_list2}')
elif len(my_list1) > len(my_list2):
        my_list1.pop()
        my_list1.pop(0)
        print(f'My first list is updated to:{my_list1}')
else:
    print('My lists have the same length so the operation is not possible')


















