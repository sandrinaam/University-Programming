#1
while True:
    try:
        n= int(input('Enter a number between 20 and 30:'))
        if n <=20 or n >=30:
            raise ValueError('Number must be between 20 and 30')
        else:
         break
    except ValueError as e:
        print(e)

my_list = []
for i in range(n):
    while True:
        try:
            x = int(input('Enter a number between - 1000 and 1000: '))
            if x <- 1000 or x > 1000:
                raise ValueError('Number must be between -1000 and 1000')
            else:
                my_list.append(x)
                break
        except ValueError as e:
            print(e)
print(f'My list is: {my_list}')

#2
sum_odd_index = 0
for i in range(1,len(my_list),2):
    sum_odd_index += my_list[i]
print(f'The sum of elements with odd index is {sum_odd_index}')

#3
count_dozens_4 = 0
for x in my_list:
    dozens = abs(x)%100//10
    if dozens % 3 ==0:
        count_dozens_4 += 1
if count_dozens_4 == 0:
    print('There are no such elements.')
else:
    print(f'There are {count_dozens_4} such elements.')

#4
negative_odd = 1
for x in my_list:
    if x < 0 and x % 2 == 0:
        negative_odd *= x
if negative_odd == 1:
    print('There are no such elements.')
else:
    print(f'The production is: {negative_odd}')

#5
my_second_list = []
for x in my_list:
    if x > n or x < -n:
        my_second_list.append(x)
print(f'My second list is: {my_second_list}')

#6
max_element = None
min_element = None
for x in my_second_list:
    if max_element is None or x > max_element:
        max_element = x
    if min_element is None or x < min_element:
        min_element = x
if min_element is None:
    print('Your list is empty so the operation is impossible.')
else:
    result = max_element - min_element
    print(f'The result is: {result}')

#7
odd_count = 0
odd_list = []
for x in my_second_list:
    if x % 2 == 1:
        odd_count += 1
        odd_list.append(x)
if odd_count == 0:
    print('There are no such elements.')
else:
    print(f'There are {odd_count} such elements.')
    print(f'Those elements are:{odd_list}')

#8
min_negative = None
for x in my_second_list:
    if x < 0:
        if min_negative is None or x < min_negative:
            min_negative = x
if min_negative is None:
    print('There is no such element so the operation is impossible.')
else:
    my_second_list.remove(min_negative)
    print(f'My second list is updated to: {my_second_list}')






