
""""
names = ['John', 'Jane', 'Alice','Sojib']
names[0] = 'Mike'
print(names)

"""
#Write a program to find the largest number in a list

num = [2,5,3,9,6,45]
#print(max(num)) 
max = num[0]
for number in num:
    if number > max:
        max = number
print("The largest number is :",max)