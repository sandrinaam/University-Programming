#1
while True:
    try:
        n = int(input('Enter a number: '))
        if n <= 15 or n >= 35:
            raise ValueError('Number must be between 15 and 35')
        else:
            break
    except ValueError as e:
        print(e)

my_list1 = []
for i in range(n):
    while True:
        try:
            x = int(input('Enter a number: '))
            if x <= 30 or x >= 300:
                raise ValueError('Number must be between 30 and 300')
            else:
                my_list1.append(x)
                break
        except ValueError as e:
            print(e)
print(f'My list is: {my_list1}')

#2
tens_three = 0
for x in my_list1:
    tens = x//10%10
    if tens % 3 ==0:
        tens_three += 1
if tens_three == 0:
    print('There are no such numbers.')
else:
    print(f'There are {tens_three} such numbers.')

#3
min_num = None
min_index = None
for i in range(len(my_list1)):
    if my_list1[i] % 6 == 4:
        if min_num is None or my_list1[i] <= min_num:
            min_num = my_list1[i]
            min_index = i
if min_num is not None:
    print(f'The index is: {min_index}')
else:
    print('There are no such numbers.')

#4
my_list2 = [x for x in my_list1 if x % 3 == 0 or x % 2 == 0 and 10<= x <= 99]

#5
sum_odd = 0
count_odd = 0
for i in range(len(my_list2)):
    if my_list2[i] % 2 == 1:
        sum_odd += my_list2[i]
        count_odd += 1
average = sum_odd / count_odd
if count_odd > 0:
    print(f'The average is: {average}')
else:
    print('The list has only one element so the operation is not possible.')

#6
min_num_2 = None
for x in my_list2:
    if x % 2 == 0:
        if min_num_2 is None or x<= min_num_2:
            min_num_2 = x
            my_list2.remove(min_num_2)
if min_num_2 is not None:
    print(f'My second list is updated to: {my_list2}')
else:
    print('There are no even numbers.')






