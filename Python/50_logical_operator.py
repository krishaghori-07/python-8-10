#movie ticket eligibility system
name = input("enter your name:")
age = int(input("enter your age:"))
student_id = input("do you have a student id?(yes/no):")
print("\n-------------------------------movie ticket eligibility system-----------------------------")
#AND operator
if age<=25  and student_id=="yes":
    print(name,"is eligible for a student discount.")

#OR operator
if age<12 or age>=60:
    print(name,"is eligible for a special age discount.")

#NOT operator
if not (student_id == "yes"):
    print(name,"does not have a student id.")

print("\n thank you for using our system")
