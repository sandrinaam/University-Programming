class Car:
    def __init__(self, car_brand, car_model, car_price, car_color, manifacture_year):
        self.car_brand = car_brand
        self.car_model = car_model
        self.car_price = car_price
        self.car_color = car_color
        self.manifacture_year = manifacture_year

    def display_info(self):
        print(f'Brand: {self.car_brand}')
        print(f'Model: {self.car_model}')
        print(f'Price: {self.car_price}')
        print(f'Color: {self.car_color}')
        print(f'Manifacture Year: {self.manifacture_year}')

cars_list = []
n = int(input('Enter number of cars: '))
for i in range(n):
    car_brand = input('Enter car brand: ')
    car_model = input('Enter car model: ')
    car_price = float(input('Enter car price: '))
    car_color = input('Enter car color: ')
    manifacture_year = int(input('Enter year of manifacture: '))
    cars= Car(car_brand, car_model, car_price, car_color, manifacture_year)
    cars_list.append(cars)

def sort_price(cars):
    cars.sort(key=lambda car: car.car_price, reverse=True)
    for c in cars:
        c.display_info()

def list_by_brand(cars, brand):
    for c in cars:
        if c.car_brand == brand:
            c.display_info()

def search_color(cars, color):
    most_expensive_car = None
    for c in cars:
        if c.car_color == color:
            if most_expensive_car is None or c.car_price > most_expensive_car.car_price:
                most_expensive_car = c
    return most_expensive_car

def newest_car(cars):
    cars_2022 = []
    for c in cars:
        if c.manifacture_year == 2022:
            cars_2022.append(c)
    return cars_2022






