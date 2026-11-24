#check profit or loss
buying_price=int(input("enter buying price:"))
selling_price=int(input("enter selling_price:"))
if selling_price>buying_price:
    print("you made a profit.")
else:
    print("you made a loss or no profit.")
