skiers = int(input())
jackets_num = int(input())
helmets_num = int(input())
shoes_num = int(input())

jacket_price = 120 * jackets_num
helmet_price = 75 * helmets_num
shoes_price = 299.99 * shoes_num

price = (jacket_price + helmet_price + shoes_price) * skiers
price_with_dds = price * 1.2
print(f'{price_with_dds:.2f}')




