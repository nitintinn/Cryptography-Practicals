import onetimepad as ot
pt="india is asian country"
key="random"
ct=ot.encrypt(pt,key)
print(ct)
dt=ot.decrypt(ct,key)
print(dt)
