#atm withdrawl system
balance=10000

amount=int(input("enter withdrwal amount:"))

if amount>0:
    if amount<=balance:
        print("withdrawal successful.")
        balance=balance-amount
        print("remaining balance:",balance)
    else:
        print("insufficient balance.")
else:
    print("please enter a valid amount.")