str = raw_input()
strlist = str.split(' ')
l = len(strlist)-1
while(l>=0):
    print strlist[l],
    l-=1
