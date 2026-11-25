#driving elibility system
age=int(input("enter your age:"))

if age>=18:
    test=input("have you passed the driving test?(yes/no):")

    if test== "yes":
        print("you are eligible for a driving licence.")
    else:
        print("first pass your driving test.")
else:
    print("you are too young to apply.")