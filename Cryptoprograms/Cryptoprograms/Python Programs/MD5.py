import hashlib as h
str=input('Enter a message:')
bytestring=str.encode()
result=h.md5(bytestring)
hash=result.digest()
print("Hash byte: ",hash)

hash=hash.decode()

print("Hash byte: ",hash)
print("Hexadecimal hash: ",result.hexdigest())
