
from Student import Student
from Group import Group

if __name__ == '__main__':
    group = Group()
    group.addStudent(Student(111,'Ivan Ivanov',5.65))
    print(group)
    group.delStudentbyFNum(111)
    print(group)
    try:
        group.group[0].setfNum(int(input('Enter fNum: ')))
    except ValueError as e:
        print(e)
    print(group.group[0].get fNum())


