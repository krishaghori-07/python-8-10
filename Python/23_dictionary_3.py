#add more names to the same key
students = {
    "name": ["abc","xyz"]
}
students["name"].append("efg")
students["name"].append("pqr")
print(students)