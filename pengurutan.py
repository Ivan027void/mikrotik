#no 4 proyek pemrograman B
# membuat daftar kosong
list = []

# jumlah elemen sebagai input (jumlah elemen adalah banyak angka yang akan diurutkan)
n = int(input("Masukkan jumlah elemen : "))

# iterasi sampai kisaran
for i in range(0, n):
	ele = int(input())

	list.append(ele) # menambahkan elemen sebanyak diinput pada n
#data sebelum diurutkan menampilkan data yang sama dengan yang diinput
print("data sebelum diurutkan:") 
print( list)

#data sesudah diurutkan menampilkan data urut 
print("data setelah diurutkan:") 
print(sorted(list))
