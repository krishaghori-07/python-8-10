kit=['books',200,None,True,False,3.14]
pockets=[]#empty list
print(kit)
print(pockets)
#we can add new items into list
pockets.append(100)#it will add new item at the end of the list
pockets.append(200)#it will add new item at the end of the list
pockets.append(500)#it will add new item at the end of the list
print(pockets)
#add item @ beggining
pockets.insert(0,15)
pockets.insert(0,45)
pockets.insert(1,20)
print(pockets)
#delete 2nd item (remove by position)
pockets.pop(2)
print(pockets)
#remove by value
#pockets.remove(150)
pockets.remove(45)
print(pockets)
pockets[0]=11#it will update or replace the value at the 0th position
print(pockets)
del pockets 
print(pockets)
#removes entire list
print("good by")