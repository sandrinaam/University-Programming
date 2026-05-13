command = input()
sum_prime = 0
sum_nonprime = 0

while command != 'stop':
    n = int(command)
    if n < 0:
        print('Number is negative.')
    else:
        if n!=2 and n!= 3 and n!=5 and (n % 2 == 0 or n % 3 == 0 or n % 5 == 0):
            sum_nonprime += n
        else:
            sum_prime += n
    command = input()


print(f'Sum of all prime numbers  is: {sum_prime}')
print(f'Sum of all non prime numbers is: {sum_nonprime}')

