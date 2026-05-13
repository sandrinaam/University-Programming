number = int(input('Enter a number: '))
with open('data.txt', 'r',encoding='utf-8') as file:
    content = file.read(number)
    print(content)
