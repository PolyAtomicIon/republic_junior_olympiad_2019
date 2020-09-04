import random

for i in range(1, 21):

    zero = ''
    if( i < 10 ):
        zero = '0'
    
    filename =  zero + str(i) + '.in'
    filename2 = zero + str(i) + '.out'
    
    filename3 = 'input' + zero + str(i) + '.txt'
    filename4 = 'output' + zero + str(i) + '.txt'

    test = open(filename, "r") 
    test2 = open(filename2, "r")

    test3 = open(filename3, "w") 
    test4 = open(filename4, "w")

    for x in test:
        test3.write(x)

    
    for x in test2:
        test4.write(x)