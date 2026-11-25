#shopping membership system

amount=int(input("enter shopping amount:"))

if amount>=2000:
    member=input("are you a premium member?(yes/no):")
    if member=="yes":
        print("you get 20% discount!")
    else:
        print("you get 10% discount !")
else:
    print("you are not eligible for a discount.")