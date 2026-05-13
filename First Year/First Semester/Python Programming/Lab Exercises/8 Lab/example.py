#1) Прочитане на файл и извеждане на съдържанието
#Създайте текстов файл hello.txt със съдържание по ваш избор.
#Напишете програма, която: го отваря в режим за четене, извежда съдържанието му на екрана.

file = open('hello.txt', 'r', encoding='utf8')
content = file.read()
print(content)
file.close()

#Броене на редове, думи и символи
#Напишете програма, която прочита текстов файл и изкарва:
#брой редове, брой думи (думи = разделени по интервал), брой символи.

lines_count = 0
words_count = 0
chars_count = 0
with open('hello.txt', 'r', encoding='utf8') as file:
    for line in file:
        lines_count += 1
        words_count += len(line.split())
        chars_count += len(line)
print(lines_count, words_count, chars_count)

# Добавяне на текст към файл
# Създайте програма, която: приема текст от потребителя, добавя го като нов ред в log.txt.
with open('log.txt', 'r', encoding='utf8') as file:
    content = file.read()
    new_text = input('Enter new text: ')
print(content + '\n' + new_text)

#Четене ред по ред с обработка
#Напишете програма, която: прочита файл data.txt,
# извежда само редовете, които съдържат думата &quot;Python&quot;.
with open('data.txt', 'r', encoding='utf8') as file:
    for line in file:
        if 'Python' in line:
            print(line, end='')

#  Показване на първите N символа
# Напишете програма, която: пита потребителя за число N, прочита първите N символа от файл.
num_char = int(input('Enter the number of characters:'))
with open('data.txt', 'r', encoding='utf8') as file:
    content = file.read(num_char)
    print(content)

#Създайте файл с текст от минимум 3 реда.
#Напишете програма, която: отваря файла, прескача първите 5 байта, прочита останалото.
with open('data.txt', 'r', encoding='utf8') as file:
    file.seek(5)
    content = file.read()
    print(content)
