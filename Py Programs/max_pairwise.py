size = int(input("Enter the size of the sequence: "))
count = 0
num_list = []

while count < size:
    num = int(input("Please enter a number: "))
    num_list.append(num)
    count = count + 1

#Finding the largest number
largest_num = num_list[0]
count = 0
while count < (size - 1):
    
    if largest_num < num_list[count + 1]:
        largest_num =  num_list[count + 1]
        
    count = count + 1

#Setting the largest number in the list to '0'
count = 0
while count < size:
    if num_list[count] == largest_num:
        num_list[count] = 0
        break
    count = count + 1

#Finding the second largest number
second_largest_num = num_list[0]
count = 0
while count < (size - 1):
    
    if second_largest_num < num_list[count + 1]:
        second_largest_num =  num_list[count + 1]
        
    count = count + 1


#Printing product
print(largest_num * second_largest_num)
