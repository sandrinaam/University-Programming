def double(num):
    one_num = ''
    while num > 0:
        num // 2
        if num % 2 == 0:
            one_num += '0'
        elif num % 2 == 1:
            one_num += '1'
        return one_num

num = 10
print(double(num))


