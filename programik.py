lista=[]
u=0
d=0
for x in range(10):
    lista.append(int(input("Podaj liczbe:")))

for x in lista:
    if x>0:
        d+=1
    elif x==0:
        continue
    else:
        u+=1
print("Dodatnie:")
print(d)
print("Ujemne:")
print(u)