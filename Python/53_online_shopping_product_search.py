#online shopping product search system
cart=["laptop","mobile","headphones","watch","keyboard"]
print("-----------------my shopping cart---------------")
print("available products:",cart)

product=input("\n enter product name to search:")
#IN operator
if product in cart:
    print(product,"is available in your cart.")
#NOT IN operator
if product not in cart:
    print(product,"is not available in your cart.")
    
print("\n thank you for shopping")