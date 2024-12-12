from school import School
from person import Person, Teacher, Student
from subject import Subject
from classroom import Classroom


school = School("ABC", "DHAKA")


eight = Classroom("Eight")
nine = Classroom("Nine")
ten = Classroom("Ten")
# Adding Class Room
school.add_classroom(eight)
school.add_classroom(nine)
school.add_classroom(ten)
# Adding Student
rahim = Student('Rahim', eight)
karim = Student('karim', nine)
fahim = Student('fahim', ten)
hamim = Student('hamim', ten)
# Student Admission
school.student_admission(rahim)
school.student_admission(karim)
school.student_admission(fahim)
school.student_admission(hamim)

# Adding Teacher
abul = Teacher("Abul Khan")
babul = Teacher("Babul Khan")
kabul = Teacher("Kabul Khan")


# Adding Subject
bangla = Subject('Bangla', abul)
physis = Subject('Physis', babul)
chemistry = Subject('Chemistry', kabul)
biology = Subject('Biology', kabul)

eight.add_subject(bangla)
eight.add_subject(physis)
eight.add_subject(chemistry)
nine.add_subject(biology)
nine.add_subject(physis)
nine.add_subject(chemistry)
ten.add_subject(chemistry)
ten.add_subject(physis)
ten.add_subject(bangla)
ten.add_subject(biology)


eight.take_semester_final_exam()
nine.take_semester_final_exam()
ten.take_semester_final_exam()

print(school)