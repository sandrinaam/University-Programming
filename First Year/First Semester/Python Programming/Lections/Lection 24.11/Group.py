class Group:
    def __init__(self, group_id, group_name):
        self.group_id = group_id
        self.group_name = group_name

    def __str__(self):
        return f'{self.group_id} {self.group_name}'

    def __repr__(self):
        return f'{self.group_id} {self.group_name}'

    def addStudent(self, student):
     if student not in Student:
        self.name = " "
        self.fNum += 1
        self.avMark += student.avMark


    def delStudentbyFNum(self, fNum):
     for i in range(0, fNum):
        if self.fNum == i:
            self.fNum -= 1
