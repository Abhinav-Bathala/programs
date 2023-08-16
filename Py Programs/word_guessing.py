#Chapter 4, Challenge 4

import random

word_bank = ("Pizza",
             "Pasta",
             "Spaghetti",
             "Lasagna",
             "Gnocchi")

num = random.randint(0, 4)
random_word = word_bank[num].lower()

for i in range(5):
    letter = input("Enter a letter to guess: ")
    if letter.lower() in random_word:
        print("Yes")
    else:
        print("No")

guess = input("Enter your guess: ")

if random_word == guess:
    print("You got the word!")
else:
    print("Aww, you didn't guess the word, the word was: ", random_word)
