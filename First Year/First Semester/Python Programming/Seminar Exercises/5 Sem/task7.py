class Food:
    def __init__(self, name, carbs, protein, fat):
        self.name = name
        self.carbs = carbs
        self.protein = protein
        self.fat = fat

    def calories(self):
        calories = self.carbs *4 + self.protein *4 + self.fat *9
        return calories

class Recipe(Food):
    def __init__(self, name, ingredients):
        self.name = name
        self.ingredients = [Food]

    def calories(self):
        calories = self.ingredients[0].calories()
        return calories
