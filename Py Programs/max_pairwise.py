size = int(input("Enter the size of the sequence: "))
num_list = []
count = 0
while count < size:
    num = int(input("Please enter a number: "))
    num_list.append(num)
    count = count + 1


#Without Sorting
def method_1():
    
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


#With Sorting
def method_2():
    temp_size = size
    x = 0
    y = 1
    
    while y < temp_size:  
        while x < (temp_size - 1):  
            if num_list[x] > num_list[y]:     
                dummy = num_list[y]
                num_list[y] = num_list[x]
                num_list[x] = dummy
            
            x = x + 1
            y = y + 1

        x = 0
        y = 1
        temp_size = temp_size - 1

    print(num_list[size - 1] * num_list[size - 2])

#main
method_1()
#method_2()







        
