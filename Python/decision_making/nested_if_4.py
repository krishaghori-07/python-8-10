#student admission system
marks=int(input("enter your marks:"))

if marks>=50:
    attendance=int(input("enter attendance percentage:"))

    if attendance>=75:
        print("admission approved.")
    else:
        print("admission rejected due to low attendance.")
else:
    print("Admission rejected due to low marks")