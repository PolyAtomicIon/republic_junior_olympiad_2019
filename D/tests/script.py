import random

for i in range(10, 13):

    zero = ''
    if( i < 10 ):
        zero = '0'
    
    filename3 = 'input' + zero + str(i) + '.txt'
    filename4 = 'output' + zero + str(i) + '.txt'

    test3 = open(filename3, "w") 
    test4 = open(filename4, "w")

    n = random.randint(500, 700)

    ints = ''

    test3.write(str(n) + ' ')

    m = n + random.randint(10, 30)

    test3.write(str(m) + '\n')

    intt = []

    for i in range(n):
        x = random.randint(150, 800)
        ints += str(x) + ' '
        intt.append(i+1)

    test3.write(ints + '\n')

    cnt = n-1

    while(cnt > 0):
        if( len(intt) == 0 ):
            break
        nn = random.randint(1, 5)
        u = intt[0]
        intt.remove(u)
        for j in range(min(nn, len(intt))):
            v = intt[j]
            test3.write(str(u) + ' ' + str(v) + '\n')
            cnt -= 1
            if( cnt <= 0 ):
                break
    
    for i in range(m-n+1+cnt):
        u = random.randint(1, n)
        while(1):
            v = random.randint(1, n)
            if u != v:
                break
        test3.write(str(u) + ' ' + str(v) + '\n')