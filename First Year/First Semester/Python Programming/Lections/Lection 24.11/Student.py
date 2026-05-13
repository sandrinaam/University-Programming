
class Student:
    def __init__(self, fNum=0, name='', avMark=0):
        self.fNum = fNum
        self.name = name
        self.avMark = avMark

    def __str__(self):
        return f'Student {self.fNum}, {self.name}, {self.avMark}'

    def __repr__(self):
        return f'Student({self.fNum}, {self.name}, {self.avMark})'

    def addStudent(self, student):
        if stufent not in self:
            self.fNum += 1
            self.avMark += student.avMark

    def delStudentbyFNum(self, fNum):
        for i in range (0, fNum):
            if self.fNum == i:
                self.fNum -= 1


    def getfNum(self):
        return self.fNum

    def setfNum(self, fNum):
        if fNum <= 0:
            raise ValueError('Not a valid Faculty Number')
        self.fNum = fNum

    def getname(self):
        return self.name

    def setname(self, name):
        if name == '' or len(name) < 2:
            raise ValueError('Not valid name')
        self.name = name

    def getavMark(self):
        return self.avMark

    def setavMark(self, avMark):
        if avMark < 2:
            raise ValueError('Not a valid grade')
        self.avMark = avMark

