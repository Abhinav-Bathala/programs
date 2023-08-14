# Chapter 4, Challenge 1


start = int(input("Enter a starting number: "))
end = int(input("Enter an ending number: "))
incrementation = int(input("Enter a number to determine the amount to count by: "))

for i in range(start - incrementation, end + incrementation, incrementation):
    print(i, end=" ")


    
