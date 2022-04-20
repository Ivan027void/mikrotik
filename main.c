//membuat sistem pembuatan kartu perpustakaan//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int menu;
    char buffer[255];
    
    printf("\n");
    printf("--------------------------------------------\n");
    printf("|               Selamat Datang             |\n");
    printf("|       Aplikasi Perpustakaan Sederhana    |\n");
    printf("--------------------------------------------\n");
    printf("Pilihan Menu :\n");
    printf("1)Info Aplikasi\n");
    printf("2)Membuat Kartu Perpustakaan\n");
    printf("3)Ketersediaan Buku\n");
    printf("4)Transaksi Peminjaman\n");
    printf("5)Transaksi Pengembalian\n");
    printf("6)Keluar\n\n");
    printf("Pilihlah Salah Satu Menu Di atas: ");
    scanf("%d",&menu);
    switch (menu) {
        case 1 : 
         printf("Info Aplikasi"); break;
        case 2 :
        printf("Membuat Kartu Perpustakaan\n ");break;
        case 3:
        printf("Berikut adalah buku yang tersedia :\n"); 
        printf("--------------------------------------------\n");
        printf("|   Judul buku         |    Pengarang      |\n");
        printf("--------------------------------------------\n");
        printf("|   Bahasa Indonesia   |   Siti Ansoriyah  |\n");
        printf("|   Kimia Dasar        |   Sulakhuddin     |\n");
        printf("|   Fisika             |   Jeffry Handhika |\n");
        printf("|   Basis Data Dasar   |   Adyanita Lubis  |\n");
        printf("|   Matematika Diskrit |   Gede Suweken    |\n");
        printf("--------------------------------------------\n");
        break;
        case 4: 
        printf("Transaksi Peminjaman Buku");break;
        case 5: 
        printf("Transaksi Pengembalian Buku");break;
        case 6:
        printf("Keluar"); break;
    }
    if(menu==2){     
    FILE *fptr;
    fptr = fopen("kartu.txt","w");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Lengkapi data dibawah ini :\n");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Nama : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);
    
    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan NPM : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);
    
    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Prodi : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Fakultas : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Alamat : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Nomor Telepon : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);
    }
    return 0;
}
