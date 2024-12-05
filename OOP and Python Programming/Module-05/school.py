class Student:
    def __init__(self, name,current_class, id,):
        self.name = name
        self.id = id
        self.current_class = current_class
    
    def  __repr__(self) -> str:
        return f'Student With Name : {self.name}, class: {self.current_class}, id: {self.id}'


class Teacher:
    def __init__(self, name, subject, id) :
        self.name = name
        self.subject = subject
        self.id = id
        
    def __repr__(self) -> str:
        return f'Teacher : {self.name}, subject: {self.subject}'

class School:
    def __init__(self, name) -> None:
        self.name = name
        self.teachers = []
        self.students = []
        
    def add_teacher(self, name, subject):
        id = len(self.teachers) + 100
        teacher = Teacher(name, subject, id)
        self.teachers.append(teacher)
    
    def enroll(self, name, fee):
        if fee > 6500:
            return 'not enough fee'
        else:
            id = len(self.students) + 1
            student = Student(name, 'C',id)
            self.students.append(student)
            return f'{name} is enrolled with id: {id}, extra money {fee - 6500}'
        
    def __repr__(self) -> str:
        print('Welcome to', self.name)
        print('------Our Teachers---------')
        for teacher in self.teachers:
            print(teacher)
        
        print('------Our Teachers---------')
        for student in self.students:
            print(student)
        return 'All done for now'
            

# alia = Student('Alia Torkari',9,1)
# ranbir = Teacher('Ran Bir', "Algo rithem", 101)
# print(alia)
# print(ranbir)

phtron = School('Phitron')
phtron.enroll('alia', 5200)
phtron.enroll('rani', 8000)
phtron.enroll('asw',7000)
phtron.enroll('bhiijan',9000)
phtron.add_teacher('tom cruse', 'DS')
phtron.add_teacher('Decap', 'algo')
phtron.add_teacher('Aj', 'database')

print(phtron)