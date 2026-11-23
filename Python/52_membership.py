#in-checks weather an item exists
#not in-checks wheather an item does not exist.
#membership operator program
fruits=["apple","mango","banana","orange","grapes"]
print("Available fruits:",fruits)
name=input("enter fruit name:")
if name in fruits:
    print("fruit is available")
else:
    print("fruit is not available")