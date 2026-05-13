command = input()
student_count = 0
standart_count = 0
kid_count = 0

while command != 'End':
    film_name = str(command)
    available_seats = int(input())
    ticket_type = input()
    if ticket_type == 'student':
        student_count += 1
    elif ticket_type == 'standart':
        standart_count += 1
    elif ticket_type == 'kids':
        kid_count += 1

        if available_seats <= 0:
         break

total_tickets = student_count + standart_count + kid_count
student_percentage = student_count / total_tickets * 100
standart_percentage = standart_count / total_tickets * 100
kid_percentage = kid_count / total_tickets * 100

print(f'Total tickets: {total_tickets}')
print(f'{student_percentage}% student tickets')
print(f'{kid_percentage}% kids tickets')

