"""

numbers  = [1,2,3,3,4,5]

numbers.append(6) # Add number to the end of list
print(numbers)

numbers.insert(0,7) # Insert a new element at
print(numbers)

numbers.remove(4) # Remove an item by value
print(numbers)

numbers.pop(1)    # Remove and return the last item
print(numbers)

#numbers.index(20)
print(20 in numbers) # Check if a value is present in

print(numbers.count(3))   # Count how many times a value

#print(numbers.sort())
numbers.sort()# Sorts the list in ascending order
numbers.reverse( ) # Reverse the sorted list
print(numbers)

numbers2 = numbers.copy()
numbers.append(10)
print(numbers2)
print(numbers)

numbers.clear()
print(numbers)

"""
# Write a program to remove the duplicates in a list.

numbers  = [1,2,3,3,4,5,5,6,7]
count = []

for duplicate  in numbers:
    if duplicate not in count:
        count.append(duplicate)
print(count)
        