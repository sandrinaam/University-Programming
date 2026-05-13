#1
import random
while True:
    try:
        n = int(input('Enter a number: '))
        if n < 25 or n > 45:
            raise ValueError('Enter a number between 25 and 45')
        else:
            break
    except ValueError as e:
        print(e)

p = random.randint(-3700, -1600)
q = random.randint(2222, 3333)

my_lst1 = []
for i in range(n):
    while True:
        try:
            x = int(input('Enter a number: '))
            if x <= p or x >= q:
                raise ValueError('Enter a number between p and q')
            else:
                my_lst1.append(x)
                break
        except ValueError as e:
            print(e)

#2
tens_two = 0
for x in my_lst1:
    if x > 0:
        tens = x//100%10
        if tens % 2 == 0:
            tens_two += 1
if tens_two == 0:
    print('No such numbers')
else:
    print(f'There are {tens_two} such numbers')

#3
min_num = None
min_index = None
for i in range(len(my_lst1)):
    if my_lst1[i] % 6 == 3:
        if min_num is None or my_lst1[i] < min_num:
            min_num = my_lst1[i]
            min_index = i
if min_num is not None:
    print(f'The searched index is {min_index}')
else:
    print('No such numbers')

#4
my_lst2 = []
count = 0
for x in my_lst1:
    if 10 <= x <= 99 and x % 5 == 0:
        my_lst2.append(x)
        count += 1
if count!= 0:
    print(my_lst2)

else:
    print('The list is empty')

#5
product =1
found = False
for i in range(len(my_lst2)):
    if i % 2 == 1:
        product *= my_lst2[i]
        found = True
if found:
    print(f'The product is {product}')
else:
    print('The operation is not possible, the list has only one element.')

#6
found = False
for i in range(len(my_lst2)):
    if my_lst2[i] % 2 == 0 and found == False:
        found = True
my_lst2[:]= [my_lst2[i] for i in range (len(my_lst2))
             if not (my_lst2[i]%2 ==0 and i% 2 ==1)]
if len(my_lst2) == 0 or found == False :
    print('The operation is not possible')
else:
    print(f'The list is updated to: {my_lst2}')

#7
if len(my_lst1) != len(my_lst2):
    smaller = my_lst1 if len (my_lst1) < len(my_lst2) else my_lst2
    middle = len(smaller)//2
    new_element = smaller[0] + smaller[-1]
    smaller.insert(middle, new_element)
    if smaller == my_lst2:
        print(f'The second list is updated to: {my_lst2}')
    else:
        print(f'The first list is updated to: {my_lst1}')

#2ra zadacha
class ClothesShop:
    def __init__(self,type,brand,price,quantity,size):
        self.clothe_type = type
        self.brand = brand
        self.price = price
        self.quantity = quantity
        self.size = size

    def sale(self,quantity):
        if self.quantity >= quantity:
            self.quantity -= quantity
            print('The product has been sold')
        else:
            print('The product is not enough')

    def discount(self):
        if 1 <= self.quantity <= 3:
            self.price = 0.65 * self.price
        elif 4 <= self.quantity <= 6:
            self.price = 0.85 * self.price

clothes_list = []
k = int(input('Enter a number: '))
for i in range(k):
    print(f'Clothes{i+1}:')
    type = input('Enter a clothe type: ')
    brand = input('Enter a brand: ')
    price = float(input('Enter a price: '))
    quantity = int(input('Enter a quantity: '))
    size = int(input('Enter a size: '))
    clothes = ClothesShop(type,brand,price,quantity,size)
    clothes_list.append(clothes)

def search_by_size_type(products,size,type):
    if not products:
        return []
    avg_price = sum(p.price for p in products)/len(products)
    result = []
    for p in products:
        if p.type== type and p.size == size and p.price < avg_price:
            result.append(p)
    return result

def cheapest_clothes(products,brand):
    filtered = [p for p in products if p.brand == brand]
    if not filtered:
        print('Brand is not available')
        return None
    return min(filtered, key=lambda p: p.price)


def sort_clothes(clothes):
    clothes.sort(key=lambda p: p.price, reverse=True)
    return clothes

def delete_by_type(products,type):
    products[:]= [p for p in products if not(p.type == type and p.quantity <2)]












