"""
# Non-parameterized function 

def greet_user():
    print("Hi there")
    print("Welcome aboard")
    
    
print("Start")
greet_user()
print("Finish")    

# Parameterized functions

def greet_user(name):
    print(f"Hello {name}")
    print("Welcome aboard")

print("Start")
greet_user("Alice")
print("Finish")

"""

# Kyewords arguments example:

def greet_user(first_name, last_name):
    print(f"Hi, {first_name}{last_name}")
    print("Welcome aboard")
    
print("Start")
greet_user("John ",last_name="Smith") # Positional argument
print("Finish")
    
    