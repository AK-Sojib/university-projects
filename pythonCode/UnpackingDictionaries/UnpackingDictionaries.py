"""
#Unpacking 
coordinates = (1,2,3)

#1
x = coordinates[0]
y = coordinates[1]
z = coordinates[2]    

#2 unpacking the tuple into variables x, y
x, y, z = coordinates 
print(y)


#Dictionary expamle 1:
customer = {
    "name": "John Smith",
    "age": 35,
    "isVerified": True
    
}
customer["birthdate"] = "Jan  1 1987" 
print(customer["birthdate"])


#Dictionaries example 2:
customer = {
    "phone": 1234
}
customer["phone"]="One Two Three Four"
print(customer["phone"])
"""
# Dictionaries example 3:

phone = input("Phone : ")
digitsMapping = {
    "1": "One",
    "2": "Two",
    "3": "Three",
    "4": "Four"
}
output = ""
for  ch in phone:
    output+=digitsMapping.get(ch, "$") + " "
print(output)