#example of list
#ctrl+/ shortcut key for comments
#name = "gautam"
#print(name)
#name = "jhanvi"
#print(name)
#name="raees"
#print(name)
#normal variable can store at a time only single value
#create list
names = ["kahan","darshil","raees","ayan","gautam","dharmik","dhruvil"]
dishes = ['pulav','pavbhaji','dosa']
print(names)
print(names[0])#print 0th value in list kahan
print(names[1])#print 1st value in list darshil
print(names[4])#print 4th value in list gautam
#print all items from the 4th position
print(names[4:])
print(names[0:2])#print 2 items from beggining
#print(names[8])#error because list has no 8th position
print(names[2:5])#print 2nd and 4th item 
#it will print name list 5 times
print(names*5)
print(names+dishes)