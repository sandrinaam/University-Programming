#1
while True:
    try:
        n = int(input('Enter a number between 15 and 35: '))
        if n<= 15 or n>= 35:
            raise ValueError('Number must be between 15 and 35')
    except ValueError as e:
        print(e)
    else:
        break

my_list= []

for i in range(n):
    while True:
        try:
            x= int(input('Enter a number: '))
            if 300 <= x <= 3000:
                my_list.append(x)
                break
            else:
                raise ValueError('Number must be between 300 and 3000')
        except ValueError as e:
            print(e)
print(f'My first list is:{my_list}')

#2
count_h =0
for x in my_list:
    hundreds= x%1000//100
    if hundreds%4 == 0:
        count_h+= 1
if count_h == 0:
    print('There is no such element.')
else:
    print(f' The number of searched value is: {count_h}')

#3
min_value = None
min_index = None
for i in range((len(my_list))):
    if my_list[i] %6 ==4:
        if min_value is None or my_list[i] < min_value:
            min_value = my_list[i]
            min_index = i
if min_index is not None:
    print(f'The minimal index is: {min_index}')
else:
    print('There is no such element in the list')

#4
my_second_list = []
for x in my_list:
    if 10 <= x <= 99:
        if x % 2 == 0 or x % 3 == 0:
            my_second_list.append(x)
print(f'My second list is:{my_second_list}')

#5
sum_num = 0
count_num = 0
for i in range(1,len(my_second_list),2):
    sum_num += my_second_list[i]
    count_num +=1
if count_num == 0:
    print(f'It is not possible to find the average.')
else:
    average = sum_num / count_num
    print(f' The average is: {average}')

#6
min_value = None
for x in my_second_list:
    if x % 2 == 0:
        if min_value is None or x < min_value:
            min_value = x
if min_value is None:
    print('There is no such element in the list')
else:
    my_second_list.remove(min_value)
    print(f'My second list is updated to: {my_second_list}')

#7
max_odd = None
min_odd = None
for x in my_second_list:
    if x % 2 == 1:
        if min_odd is None or x < min_odd:
            min_odd = x
        if max_odd is None or x > max_odd:
            max_odd = x
if max_odd is None or min_odd is None:
    print('The calculation is not possible.')
else:
    new_element = max_odd * min_odd
    my_second_list.insert(0, new_element)
    print(f'My second list is updated to: {my_second_list}')





