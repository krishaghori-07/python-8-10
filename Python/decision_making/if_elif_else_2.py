#student grade calculator
marks=int(input("enter your marks:"))

if marks>=90 and marks<=100:
    print("grade A")
elif marks>=70 and marks<90:
    print("grade B")
elif marks>50 and marks<70:
    print("Grade C")
else:
    print("fail")

