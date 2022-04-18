//membuat sistem pembuatan kartu perpustakaan//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int menu;
    char buffer[255];

    printf("                selamat datang              \n");
    printf("        aplikasi perpustakaan sederhana     \n");
    printf("pilihan:\n");
    printf("1)info aplikasi\n");
    printf("2)membuat kartu perpustakaan\n");
    printf("3)rak buku\n");
    printf("4)transaksi peminjaman\n");
    printf("5)transaksi pengembalian\n");
    printf("6)keluar\n");
    printf("pilih menu: \n");
    scanf("%d",&menu);
    switch (menu) {
        case 1 : 
        printf("info aplikasi"); break;
        case 2 :
        printf("membuat kartu pustakaan\n ");break;
        case 3:
        printf("rak buku"); break;
        case 4: 
        printf("transaksi peminjam buku");break;
        case 5: 
        printf("transaksi pengembalian buku");break;
        case 6:
        printf("keluar"); break;
    }
    if(menu==2){     
    FILE *fptr;
    fptr = fopen("kartu.txt","w");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("lengkapi data dibawah ini:\n");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelag dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("\n masukkan nama: ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelag dibuka kita wajib menutupi file ini
    fclose(fptr);
    
    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("\n masukkan npm: ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelag dibuka kita wajib menutupi file ini
    fclose(fptr);
    
    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("\n masukkan prodi: ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelag dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("\n masukkan fakultas: ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelag dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("\n masukkan alamat: ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelag dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //menuyruh pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("\n masukkan no_tlp: ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelag dibuka kita wajib menutupi file ini
    fclose(fptr);
    }
    return 0;
}
