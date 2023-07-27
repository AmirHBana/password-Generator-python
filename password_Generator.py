import random
import string

def passwordGenerator(length = 16):
    character = string.digits + string.ascii_letters
    password = "".join(random.sample(character, length))
    return password

print(passwordGenerator())    
    



