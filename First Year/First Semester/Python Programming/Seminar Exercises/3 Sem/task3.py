from operator import index

text = input()
dictionary = {}
for char in text:
    if char not in dictionary:
        index = text.find(char)
        new_text = text[:index] + text[index+1:]
        dictionary[char] = new_text

print(dictionary)
