#no3 proyek pemrograman
#segitiga dengan python
 
rows=input('masukkan jumlah baris:' )
rows=int(rows)
for row in range(1, rows+1):
    for column in range(1, row + 1):
        print(column, end=' ')
    print("")
