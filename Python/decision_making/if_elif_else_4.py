#simple calculator
num1=int(input("enter first number:"))
num2=int(input("enter second number:"))

print("1.addition")
print("2.subtraction")
print("3.multiplication")
print("4.division")

choice=int(input("enter your choice:"))

if choice == 1:
    print("Addition:",num1+num2)
elif choice == 2:
    print("subtraction:",num1-num2)
elif choice == 3:
    print("multiplication:",num1*num2)
elif choice == 4:
    if num2!=0:
        print("division:",num1/num2)
    else:
        print("cannot divide by zero.")
else:
    print("invalid choice!")
