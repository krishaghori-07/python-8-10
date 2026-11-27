#movie ticket prizing
age=int(input("enter your age:"))

if age < 5:
    print("ticket is free.")
elif age <= 12:
    print("children ticket:Rs.100")
elif age <= 18:
    print("teenager ticket: Rs.150")
elif age <= 59:
    print("adult ticket:Rs.250")
else:
    print("senior citizen ticket:Rs.150")