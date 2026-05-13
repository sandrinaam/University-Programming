total_floor = int(input())
rooms_per_floors = int(input())

for floor in range(total_floor , 0 , -1 ):
    for room in range(rooms_per_floors):
        if floor == total_floor:
            print(f'L{floor}{room}', end=' ')
        elif floor % 2 == 0:
            print(f'O{floor}{room}', end=' ')
        elif floor % 2 == 1:
            print(f'A{floor}{room}', end=' ')

    print()



