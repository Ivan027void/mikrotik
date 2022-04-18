#No.3 Proyek Pemrograman
#Piramida angka Segitiga dengan python
 
baris = int(input("Masukkan Jumlah Baris: "))
koef = 1

for i in range(1, baris+1):
    for space in range(1, baris-i+1):
        print(" ",end="")
    for j in range(0, i):
        if j==0 or i==0:
            koef = 1
        else:
            koef = koef + 1
        print(koef, end = " ")
    print()
