#Chapter 4, Challenge 2

word = input("Enter a word to be spelt out backwards: ")

for i in range(len(word)-1, -1, -1):
             print(word[i], end="")
             
             
