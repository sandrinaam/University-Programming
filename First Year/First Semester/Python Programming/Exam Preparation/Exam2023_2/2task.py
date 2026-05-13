class Employee:
    def __init__(self, i_num, fname, lname, work_experience, education_level, salary, age):
        self.i_num = i_num
        self.fname = fname
        self.lname = lname
        self.work_experience = work_experience
        self.education_level = education_level
        self.salary = salary
        self.age = age

    def display_info(self):
        print(f'I num: {self.i_num}')
        print(f'Name: {self.fname}')
        print(f'Family name: {self.lname}')
        print(f'Work experience: {self.work_experience}')
        print(f'Education level: {self.education_level}')
        print(f'Salary: {self.salary}')
        print(f'Age: {self.age}')

    def bonus(self):
        if self.education_level == 3:
            self.salary = self.salary * 1.05
        elif self.education_level == 2:
            self.salary = self.salary * 1.02
        for i in range(self.work_experience):
            self.salary += self.salary * 0.012

employee_list = []
n = int(input('How many employees do you want to create? '))
for i in range(int(n)):
    i_num = int(input('Enter a number: '))
    fname = input('Enter name: ')
    lname = input('Enter a family name: ')
    work_experience = int(input('Enter work experience: '))
    education_level = int(input('Enter education level: '))
    salary = float(input('Enter salary: '))
    age = int(input('Enter age: '))
employers=Employee(i_num, fname, lname, work_experience, education_level, salary, age)
employee_list.append(employers)

def sort_employee_list(employers):
    employers.sort(key=lambda x: x.salary , reverse=True)
    for employer in employers:
        print(employer)

def search_by_name(employers, name, lname):
    for employer in employers:
        if employer.fname == name and employer.lname == lname:
            print(f'Name: {employer.fname}')
            print(f'Lname: {employer.lname}')
            print(f'Work experience: {employer.work_experience}')
            print(f'Education level: {employer.education_level}')
            print(f'Salary: {employer.salary}')
            print(f'Age: {employer.age}')
        else:
            print('Not found')

def

