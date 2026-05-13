n = int(input())
today = int(input())

day_searched = today + n
if day_searched % 7 == 1:
    print('Monday')
elif day_searched % 7 == 2:
    print('Tuesday')
elif day_searched % 7 == 3:
    print('Wednesday')
elif day_searched % 7 == 4:
    print('Thursday')
elif day_searched % 7 == 5:
    print('Friday')
elif day_searched % 7 == 6:
    print('Saturday')
elif day_searched % 7 == 0:
    print('Sunday')

