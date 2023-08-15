#Chapter 5, Challenge 2
'''
Write a Character Creator program for a role-playing game. The
player should be given a pool of 30 points to spend on four
attributes: Strength, Health, Wisdom, and Dexterity. The
player should be able to spend points from the pool on any
attribute and should also be able to take points from an
attribute and put them back into the pool.
'''

attribute = {"health" : 0,
             "strength" : 0,
             "wisdom" : 0,
             "dexterity" : 0}
pool = 30

print("You have 30 points to spend on your attributes. Choose wisely")
print("Your 4 options are: Health, Strength, Wisdom, and Dexterity")


def spend(pool):
    
    if pool == 0:
        print("You have no points to spend")
    else:
        selection = input("Choose an attribute to spend points on: ")
        if selection.lower() == 'health':
            num_spend = int(input("How many points would you like to spend? Please enter here: "))
            if pool >= num_spend:
                attribute["health"] += num_spend
                pool -= num_spend
            else:
                print("You don't have enough points to spend on your chosen attribute")
        elif selection.lower() == 'strength':
            num_spend = int(input("How many points would you like to spend? Please enter here: "))
            if pool >= num_spend:
                attribute["strength"] += num_spend
                pool -= num_spend
            else:
                print("You don't have enough points to spend on your chosen attribute")
        elif selection.lower() == 'wisdom':
            num_spend = int(input("How many points would you like to spend? Please enter here: "))
            if pool >= num_spend:
                attribute["wisdom"] += num_spend
                pool -= num_spend
            else:
                print("You don't have enough points to spend on your chosen attribute")
        elif selection.lower() == 'dexterity':
            num_spend = int(input("How many points would you like to spend? Please enter here: "))
            if pool >= num_spend:
                attribute["dexterity"] += num_spend
                pool -= num_spend
            else:
                print("You don't have enough points to spend on your chosen attribute")
        else:
            print("The option you have selected does not match the given list of attributes. Please select one from the provided list")
            
    return pool

    
def retrieve(pool):
    if pool != 30:
        selection = input("Choose an attribute to retrieve points on: ")      
        if selection.lower() == 'health':
            num_retrieve = int(input("How many points would you like to retrieve? Please enter here: "))
            if num_retrieve <= attribute["health"]:
                attribute["health"] -= num_retrieve
                pool += num_retrieve
            else:
                print("The amount of points you chose to retrieve is larger than the amount of points present in your characters health attribute")
        elif selection.lower() == 'strength':
            num_retrieve = int(input("How many points would you like to retrieve? Please enter here: "))
            if num_retrieve <= attribute["strength"]:
                attribute["strength"] -= num_retrieve
                pool += num_retrieve
            else:
                print("The amount of points you chose to retrieve is larger than the amount of points present in your characters health attribute")
        elif selection.lower() == 'wisdom':
            num_retrieve = int(input("How many points would you like to retrieve? Please enter here: "))
            if num_retrieve <= attribute["wisdom"]:
                attribute["wisdom"] -= num_retrieve
                pool += num_retrieve
            else:
                print("The amount of points you chose to retrieve is larger than the amount of points present in your characters health attribute")     
        elif selection.lower() == 'dexterity':
            num_retrieve = int(input("How many points would you like to retrieve? Please enter here: "))
            if num_retrieve <= attribute["dexterity"]:
                attribute["dexterity"] -= num_retrieve
                pool += num_retrieve   
            else:
                print("The amount of points you chose to retrieve is larger than the amount of points present in your characters health attribute")   
        else:
            print("The option you have selected does not match the given list of attributes. Please select one from the provided list")                      
    else:
        print("You have no points to retrieve")
        
    return pool

    
while True:

    action = input("Would you like to spend your points or retrieve your points? Please enter either 'spend' or 'retrieve': ")
    
    if action.lower() == 'spend':
        pool = spend(pool)
        print("You now have: \n",
          "Pool: ", pool, "\n",
          "Health: ", attribute["health"],"\n",
          "Strength: ", attribute["strength"],"\n",
          "Wisdom: ", attribute["wisdom"], "\n",
          "Dexterity: ", attribute["dexterity"])
        
    elif action.lower() == 'retrieve':
        pool = retrieve(pool)
        print("You now have: \n",
          "Pool: ", pool, "\n",
          "Health: ", attribute["health"],"\n",
          "Strength: ", attribute["strength"],"\n",
          "Wisdom: ", attribute["wisdom"], "\n",
          "Dexterity: ", attribute["dexterity"])
        
    else:
        print("The action you have chosen does not exist. Please either choose 'spend' or 'retrieve'.")
        
