#1
while True:
    try:
        n = int(input('Enter a number between 15 and 35: '))
        if n <= 15 or n >=35:
            raise ValueError('Number must be between 15 and 35')
        else:
            break
    except ValueError as e:
        print(e)

my_list = []
for i in range(n):
    while True:
        try:
            x = int(input('Enter a number between 30 and 300:'))
            if x <= 30 or x >=300:
                raise ValueError('Number must be between 30 and 300')
            else:
                my_list.append(x)
                break
        except ValueError as e:
            print(e)
print(f'My first list is {my_list}')

#2
count_dozens = 0
for x in my_list:
    dozens = x%100//10
    if dozens % 3 == 0:
        count_dozens += 1
if count_dozens == 0:
    print('There are no such numbers.')
else:
    print(f'There are {count_dozens} such numbers.')

#3
min_index = None
min_value = None
for i in range(len(my_list)):
    if my_list[i] %6 == 4:
        if min_value is None or my_list[i] < min_value:
            min_value = my_list[i]
            min_index = i
if min_index is None:
    print('There are no such numbers.')
else:
    print(f'The minimal index is {min_index}')

#4
my_second_list = []
for x in my_list:
    if 10<= x <= 99:
        if x % 2 == 0 or x % 3 == 0:
            my_second_list.append(x)
print(f'My second list is {my_second_list}')

#5
sum_num = 0
count = 0
for i in range(1,len(my_second_list),2):
    sum_num += my_second_list[i]
    count += 1
if count == 0:
    print('There are no such numbers.')
else:
    average = sum_num/count
    print(f'The average is {average}')

#6
min_even = None
for x in my_second_list:
    if x % 2 == 0:
        if min_even is None or x < min_even:
            min_even = x
if min_even is None:
    print('The operation is impossible.')
else:
    my_second_list.remove(min_even)
    print(f'My second list is updated to:{my_second_list}')



