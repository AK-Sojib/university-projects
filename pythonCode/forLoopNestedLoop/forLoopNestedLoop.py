'''
1.
for item in range(5,10,2):
    print(item)
2.    
for item in 'Pyton':
    print(item)    
3.    
for item in ["Python","Java","Php"]:
    print(item)
    
4.
prices = [10,20,30]
total = 0
for price in prices:
    total += price
print(f"Total = {total}")
    

# Nested loops example:    
for x in range(4):
    for y in range(3):
        print(f"({x}, {y})")
        
'''
#excersise: printing F

number = [5,2,5,2,2]

for f in number:
#   print('x'*f)
    output = ''
    for count in range(f):
        output += 'x'
    print(output)    
  

