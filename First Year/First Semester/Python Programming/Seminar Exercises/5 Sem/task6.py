from curses.ascii import isdigit


class TriangleChecker(object):
    def __init__(self, a,b,c):
        self.a = a
        self.b = b
        self.c = c

    def is_triangle(self):
        if self.a == self.b and self.b == self.c:
            print("Triangle is true")
        elif self.a < 0 or self.b < 0 or self.c < 0:
            print("Triangle can't be created with negative values")
        elif  not isdigit(self.a) or not isdigit(self.b) or not isdigit(self.c):

        
