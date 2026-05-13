with open('data.txt', 'r',encoding='utf-8') as file:
    file.seek(5)
    content = file.read()
    print(content)
