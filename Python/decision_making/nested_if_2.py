#check username and password
username=input("enter username:")
if username == "admin":
    password=input("enter password:")

    if password == "12345":
        print("login sucessful!")
    else:
        print("incorrect password.")
else:
    print("username not found")