class Employee:
    def __init__(self, name, position, salary):
        self.name = name
        self.position = position
        self.salary = float(salary)

    def __str__(self):
        return self.name, self.position, self.salary, self.display_info

    def display_info(self):
        print("Name:", self.name)
        print("Position:", self.position)
        print("Salary:", self.salary)

class Manager(Employee):
    def __init__(self, name, position, salary, department):
        Employee.__init__(self, name, position, salary)
        self.department = department

    def calculate_bonus(self,salary):
        bonus = 0.1 * salary + 1000
        return bonus

    def display_info(self):
        print(self.name, self.position, self.salary, self.display_info, self.department)

class Developer(Employee):
    def __init__(self, name, position, salary, programming_languages):
        Employee.__init__(self, name, position, salary)
        self.programming_languages = [programming_languages]

    @staticmethod
    def calculate_bonus(salary,programming_languages):
        bonus = 0.15 * salary + 200 * len(programming_languages)
        return bonus

    def display_info(self):
        print(self.name, self.position, self.salary, self.display_info, self.programming_languages)

class Company(Employee):
    def __init__(self, name, position, salary):
        Employee.__init__(self, name, position, salary)

    def add_employee(self, employee):
        if employee.name not in self.name:
            self.name.append(employee.name)

    def total_salary_expense(self):
        expenses = sum(self.salary)
        return expenses

    def display_all_employees(self):
        print(self.name, self.salary,self.display_info)


