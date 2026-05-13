grade = float(input())
scholarship = float(input())
scholarship_student = 0

if grade >= 5.50:
    scholarship_student = scholarship
elif 5.50 > grade >= 5.00:
    scholarship_student = scholarship * 0.7
elif 5.00 > grade >= 4.50:
    scholarship_student = scholarship * 0.5
elif 4.50 > grade:
    scholarship_student = 0

print(scholarship_student)
