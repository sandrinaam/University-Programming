class Market:
    def __init__(self, barcode, name, manufacturer, price,quantity):
        self.barcode = barcode
        self.name = name
        self.manufacturer = manufacturer
        self.price = price
        self.quantity = quantity

    def sale(self,quantity):
        if self.quantity < quantity:
            print('Sorry, there are no enough items')
        else:
            self.quantity -= quantity
            print(f'Successfully sold {quantity} items.')
            print(f'There are now {self.quantity} items.')

    def discount(self):
        if 30 <= self.price <= 50:
            self.price *= 0.95
        elif 10 <= self.price < 30:
            self.price *= 0.93

product_list = []
n = int(input('Enter number of products: '))
for i in range(n):
    print(f'Product {i+1}')
    barcode = int(input('Enter barcode:'))
    name = input('Enter product name:')
    manufacturer =input('Enter manufacturer:')
    price = float(input('Enter price:'))
    quantity = int(input('Enter quantity:'))
    product = Market(barcode,name,manufacturer,price,quantity)
    product_list.append(product)

def search_by_barcode(products,barcode):
    for p in products:
        if p.barcode == barcode:
            print(f'The product is {p.name}')
            print(f'The manufacturer is {p.manufacturer}')
            print(f'The price is {p.price}')
            print(f'The quantity is: {p.quantity}')
            return
    print('Wrong barcode')
    print(f'Available barcodes: {[p.barcode for p in products]}')

def search_by_manufacturer(products,manufacturer):
    manufacturer_products = [p for p in products if p.manufacturer == manufacturer]
    if not manufacturer_products:
        return []
    avg_price = sum(p.price for p in manufacturer_products) / len(manufacturer_products)
    return [p.name for p in manufacturer_products if p.price <= avg_price]


def sort_by_quantity(products):
    products.sort(key=lambda x: x.quantity, reverse=False)
    for p in products:
        print(f'{p.name} - Quantity: {p.quantity}')

def delete_by_name(products,name):
       products[:] = [p for p in products if not (p.name == name and p.quantity <=3)]





