//membuat sistem pembuatan kartu perpustakaan//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(int totalArgumen, char *nilaiArgumen[]){

    if(!(totalArgumen == 3)){ // Tidak sama dengan 3 
        printf("Inputan yang anda masukkan tidak sesuai prosedur -_-");
        return EXIT_FAILURE;
    }
    char userNameInput[50],passwordInput[50];
    strcpy(userNameInput,nilaiArgumen[1]);
    strcpy(passwordInput,nilaiArgumen[2]);

    int menu;
    char kem;
    char buffer[255];
    
    FILE *fptr;
    // Membuat error handling jika file yang dituju tidak ditemukan
    if((fptr = fopen("Database/login.bin", "rb")) == NULL){
        printf("File tidak ditemukan -_-");
        return EXIT_FAILURE;
    }
    // Deklarasi Variabel untuk membaca isi file binari
    char bufferedReader[50];
    fread(bufferedReader,sizeof(char), sizeof(bufferedReader)/ sizeof(char),fptr);
    fclose(fptr);

    /* Deklarasi variabel untuk membuat variabel username dan password 
        dengan memakai fungsi strtok untuk pemisah antara username dan password
        isi dari file binari tersebuat adalah romusha@ardisholat
        username = mikrotik
        password = ivan
        Delimiter yang digunakan adalah tanda @*/

        char *string[3];
        char username[50], password[50];
        int temp = 0; // Variabel bantuan

        string[0] = strtok(bufferedReader,"@");
        while (string[temp++] != NULL){
            string[temp] = strtok(NULL,"@");
        }

        strcpy(username,string[0]);
        strcpy(password,string[1]);

        printf("Username:%s\n", username); 
        printf("Password:%s\n", password); 
        if((strcmp(userNameInput,username) == 0) && (strcmp(passwordInput,password) == 0)){
            printf("Selamat anda berhasil login ^_^");
        }else{
            printf("Maaf Anda gagal login -_-");
            return EXIT_FAILURE;
        }
        mulai:
  { 
    
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
         printf("Info Aplikasi\n\n"); 
         printf("Aplikasi ini merupakan hasil dari tugas project mata kuliah Pemrograman kelas B yang disusun oleh kelompok Mikrotik.\n");
         printf("Aplikasi ini digunakan sebagai simulasi pembuatan kartu perpustakaan secara sederhana.");
         break;
        case 2 :
         printf("Membuat Kartu Perpustakaan\n ");
            break;
        case 3:
         printf("Berikut adalah buku yang tersedia :\n\n"); 
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
         printf("Transaksi Peminjaman Buku\n\n");
         printf("Mohon maaf data anda belum tersedia");
            break;
        case 5: 
         printf("Transaksi Pengembalian Buku\n\n");
         printf("Mohon maaf data anda belum tersedia");
            break;
        case 6:
         printf("Keluar"); 
            break;
        default:
         printf("Maaf Pilihan anda tidak tersedia\n\n");
}
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
    //meminta pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Nama : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);
    
    fptr = fopen("kartu.txt","a");
    //meminta pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan NPM : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);
    
    fptr = fopen("kartu.txt","a");
    //meminta pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Prodi : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //meminta pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Fakultas : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //meminta pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Alamat : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);

    fptr = fopen("kartu.txt","a");
    //meminta pengguna untuk menginput sesuatu ke dalam file document.txt
    printf("Masukkan Nomor Telepon : ");
    fgets(buffer, sizeof(buffer), stdin);
    //menulis isi dari variabel bufferedwritter ke dalam file document.txt
    fputs(buffer, fptr);
    // setelah dibuka kita wajib menutupi file ini
    fclose(fptr);
    }
     tidak :
    printf("Kembali ke menu utama [Y/T] ? "); 
    kem = getche();
    if (kem == 'y' || kem == 'Y')
    goto mulai;
 else if (kem == 't' || kem == 'T')
     {
         printf("\n--------------------------");
         printf("\n==========================");
         printf("\n\n...... TERIMA KASIH ......\n\n");
         printf("==========================");
         printf("\n--------------------------");
            }
    return 0;
  }    
    
    
