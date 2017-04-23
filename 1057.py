alpha = "0abcdefghijklmnopqrstuvwxyz"
la = list(alpha)
dict1 = {}
for i in xrange(1,27):
    dict1[la[i]] = i
str = raw_input()
str = str.lower()
l = len(str)
num = 0
for i in xrange(l):
    if str[i] in dict1:
        num += dict1[str[i]]
    else:
        continue
num = bin(num)
numlist = list(num)
l2 = len(numlist)
num0 = 0
num1 = 0
for i in xrange(2,l2):
    if numlist[i] == '0':
        num0 += 1
    elif numlist[i] == '1':
        num1 += 1
if numlist[0] =='0' and numlist[1] == 'b' and numlist[2]  =='0' :
    num0 =0
    num1 =0
print num0,
print num1

