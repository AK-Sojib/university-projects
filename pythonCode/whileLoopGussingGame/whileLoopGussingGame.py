'''
secret_number = 9
i = 0
while i<3 :
    guess = int(input("Guess : "))
    i +=1
    if guess == secret_number:
        print("You Won")
        break
    else:
        print("Sorry, you failed")
'''
secret_number = 8
guess_count = 0
guess_limit = 3
while guess_count < guess_limit:
    guess = int(input('Guess : '))
    guess_count += 1
    if guess == secret_number:
        print('You won')
        break
    else:
        print('Sorry, you failed')