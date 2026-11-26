#electricity bill calculator
units=int(input("enter electricity units:"))
if units<=100:
    print("electricity bill:Rs.",units * 3)
elif units<=200:
    print("electricity bill:Rs.",units * 5)
elif units<=300:
    print("electricity bill :Rs.",units * 7)
else:
    print("electricity bill:Rs.",units * 10)