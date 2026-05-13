sex = input()
if sex == 'male':
    bank_account = int(input())
    if bank_account >= 250000:
        print(f'Подходящ кандидат')
    else:
        print(f'Неподходящ кандидат')

elif sex == 'female':
    bra_size = int(input())
    if bra_size >= 100:
        print(f'Подходящ кандидат')
    else:
        print(f'Неподходящ кандидат')


