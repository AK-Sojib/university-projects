'''
#Exceptions learning 1
try:
    age = int(input("Age = "))
    print(f"You are {age} years old.")
except  ValueError:
    print("Invalid input. Please enter a number for Age.")
'''
# Exceptions learning  2 multiple  exceptions
try:
    age = int(input("Age = "))
    income = 30000
    risk = income / age
    print(f"You are {age} years old.")
    print(risk)
except ZeroDivisionError:
    print("Your age cannot be zero.")
except  ValueError:
    print("Invalid input. Please enter a number for Age.")