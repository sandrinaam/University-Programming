text= input()
longest_word = 0
for word in text:
    if longest_word < len(word):
        longest_word = len(word)
        if longest_word > len(word):
            shortest_word = len(word)
print(text)

