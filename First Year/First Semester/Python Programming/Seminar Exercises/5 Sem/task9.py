class Phone:
    def __init__(self, brand, model, price, quantity):
        if len(brand) < 2:
            raise ValueError('Invalid brand')

        self.brand = brand
        self.model = model
        self.price = float(price)
        self.quantity = int(quantity)
        self.phones = []

    def display_info(self):
        print(f"Brand:{self.brand}")
        print(f"Model:{self.model}")
        print(f"Price:{self.price}")
        print(f"Quantity:{self.quantity}")

    def create_phone_list(self):
        self.phones.append(self)

    def find_max_price(self,phones):
        max_price = 0
        for phone in phones:
            if phone.price > max_price:
                max_price = phone.price
        return max_price

    def calculate_average_price(self, phones):
        total = 0
        for phone in phones:
            total += phone.price
        return total / len(phones)
    
    @staticmethod
    def filter_by_brand(phones, brand):
        result = []
        for phone in phones:
            if phone.brand == brand:
                result.append(phone)
        return result

Phone1 = Phone("Iphone", "16", "2500", "2")
Phone2 = Phone("Iphone", "161", "3000", "5")
Phone3 = Phone("Iphone", "162", "2000", "6")
Phone4 = Phone("Iphone", "15", "1899", "1")
Phone5 = Phone("Iphone", "151", "2299", "4")
Phone6 = Phone("Iphone", "152", "2700", "10")






