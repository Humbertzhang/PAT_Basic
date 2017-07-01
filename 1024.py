import sys

def func(data):
    #Flag
    if data[0] == '-':
        sys.stdout.write('-')
    #Eindex
    eindex = data.find('E')
    #Number
    num = data[1:eindex]
    #Dot index
    for i in range(len(num)):
        if num[i] == '.':
            dotindex = len(num)-i-1

    e = int(data[eindex+1:])
    #change_bit = num_after_dot_bit + e
    if e < 0:
        print '0.' + (-e-1)*'0' + num.replace('.','')
    elif e > 0:
        if e > dotindex:
            print num[0] + num[2:] + (e - dotindex) * '0'
        elif e < dotindex:
            print num[0] + num[2:2+e] + '.' + num[2+e:]
        elif e == dotindex:
            print num.replace('.','')
data = raw_input()
func(data)