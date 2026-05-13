class Worker:
    def __init__(self,worker_num,f_name,l_name,work_experience_company
                 ,total_years_experience,salary,age):
        self.worker_num = worker_num
        self.f_name = f_name
        self.l_name = l_name
        self.work_experience_company = work_experience_company
        self.total_years_experience = total_years_experience
        self.salary = salary
        self.age = age

    def worker_info(self):
        print(f'Worker number: {self.worker_num}')
        print(f'Name: {self.f_name}')
        print(f'Family name: {self.l_name}')
        print(f'Work experience company: {self.work_experience_company}')
        print(f'Total years experience: {self.total_years_experience}')
        print(f'Salary: {self.salary}')
        print(f'Age: {self.age}')

    def salary_bonus(self):
        if self.work_experience_company <5:
            self.salary += self.salary * 0.005
        elif 5 <= self.work_experience_company < 10:
            self.salary += self.salary * 0.015
        else:
            self.salary += self.salary * 0.02

worker_list = []
n = int(input('Number of workers: '))
for i in range(n):
    print(f'Worker:{i+1}')
    worker_num = int(input('Worker number: '))
    f_name = input('Name: ')
    l_name = input('Family name: ')
    work_experience_company = int(input('Work experience company: '))
    total_years_experience = int(input('Total years experience: '))
    salary = int(input('Salary: '))
    age = int(input('Age: '))
    worker = Worker(worker_num,f_name,l_name,work_experience_company,total_years_experience,salary,age)
    worker_list.append(worker)

def search_by_num(workers, number):
    for w in workers:
        if w.worker_num == number:
            return True
    return False

def search_by_name_experience(workers, name, experience):
    found = False
    for w in workers:
        if w.f_name.lower() == name.lower() and w.experience == experience:
            w.worker_info()
            found = True
    if not found:
        print('No worker with this criteria found')

def avg_worker_age(workers):
    ages = [w.age for w in workers if work_experience_company >= 10]
    if len(ages) == 0:
        return 0
    return sum(ages) / len(ages)

def remove_worker(workers, number):
    for w in workers:
        if w.worker_num == number:
            workers.remove(w)
            print('Information deleted!')
            return
    print('Wrong worker_num!!!')

def add_worker(workers, worker):
    workers.append(worker)
    print('Information added!')




