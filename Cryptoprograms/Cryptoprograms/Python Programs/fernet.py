import cryptography as cryp
from cryptography.fernet import Fernet
key = Fernet.generate_key()
print(key)
f=Fernet(key)
print(f)
cipher=f.encrypt(b"This is a secret message. #3#3 Why 4r3 y0u h3r3")
print(cipher)
plain=f.decrypt(cipher)
print(plain)