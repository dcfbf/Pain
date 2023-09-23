'''
Lista = [-10,1,12,20,10,30,10]
min1 = min(Lista)
max1 = max(Lista)
posmin1 = Lista.index(min1)
posmax1 = Lista.index(max1)
Lista[posmin1] = max1
Lista[posmax1] = min1
print(Lista)
'''
Lista = [-10,1,12,20,10,30,10]
posmin = Lista.index(min(Lista))
posmax = Lista.index(max(Lista))
Lista[posmin],Lista[posmax] = Lista[posmax],Lista[posmin]
print(Lista)
