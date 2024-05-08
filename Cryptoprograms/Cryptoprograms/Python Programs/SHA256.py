import hashlib as h
str=input("Enter a message:")
bytestring=str.encode()
result=h.sha512(bytestring)
print(result.hexdigest())
