P=23
G=9
a=4
b=3
x=(G**a)%P
y=(G**b)%P
print(x)
print(y)
ka=(y**a)%P
kb=(x**b)%P
if ka==kb:
    print("key is:",ka)
