# membuat daftar kosong
list = []

# jumlah elemen sebagai input
n = int(input("Masukkan jumlah elemen : "))

# iterasi sampai kisaran
for i in range(0, n):
	ele = int(input())

	list.append(ele) # menambahkan elemen
print("data sebelum diurutkan:") 
print( list)
print("data setelah diurutkan:") 
print(sorted(list))
