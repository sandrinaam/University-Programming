figure = input()

if figure == 'square':
    a = int(input())
    P = a * 4
    S = a * a
elif figure == 'triangle':
    a = int(input())
    b = int(input())
    c = int(input())
    P = a + b + c
    S = (a * b) / 2
elif figure == 'rectangle':
    a = int(input())
    b = int(input())
    P = (a + b) * 2
    S = a * b

print(P)
print(S)


