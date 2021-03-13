# implemented in python
m = 3
c = 3
near = True

def isused(sets):
    count = 0
    while m != 0 and c != 0:
        if near == True:
            print ('[ near', m, c, ']')
        else:
            print ('[ far', m, c, ']')

        usedsets = []

        count += 1
        i = 0
        while set != usedsets[i]:
            if i == count:
                usedsets.append(set)
                return False
        return True