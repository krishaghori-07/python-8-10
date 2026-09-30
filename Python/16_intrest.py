#program to calculate simple intrest
#take input from user
principal=float(input("enter principal amount:"))
#intrest rate
rate=6.25
#take time from user
time=int(input("enter time in years:"))
#calculate simple intrest
interest=(principal*rate*time)/100
#display result
print("inerest=",interest)