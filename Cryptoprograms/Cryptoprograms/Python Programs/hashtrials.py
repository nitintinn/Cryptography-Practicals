import hashlib as h
print("All cryptographic algorithms available are:")
L=h.algorithms_available
print(L)

print('\nAlgorithms started with "sha" are:')
for x in L:
    if x[0:3]=='sha':
        print(x, end=' ')



"""
    To use:
            encode():convert string to bytes to be acceptable by hash function
       & hexdigest():Returns the encoded data in hexadecimal format
          & digest():
"""
#SHA 256 internal block length is 32 bits
#SHA 384 internal block length is 32 bits, but it is truncated version
#SHA 224 internal block length is 32 bits, but it is truncated version
#SHA 512 internal block length is 64 bits
"""b=int(input("Enter no. of bits:"))
a=1
while a<30:
    if ((512*a)-64) > b :
        break
    a+=1
pbits=512*a-64-b
print("Bits to be padded:",pbits)"""
