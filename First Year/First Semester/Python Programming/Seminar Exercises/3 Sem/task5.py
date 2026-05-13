from operator import index

numbers = list((input("Enter a number: ")).split())
sorted_numbers = sorted(numbers, reverse=True)
second_largest = sorted_numbers[1]
index_of_second = numbers.index(second_largest)

result = [second_largest, index_of_second]
print(result)



