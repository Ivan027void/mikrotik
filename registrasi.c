#include <stdio.h>

int main(){
    //membuka file login.bin
    FILE *fpw = fopen("Database/login.bin","wb");

    // menulis untuk membuat user dan password
    char bufferedWriter[50] = "mikrotik@ivan";

    //Mengisi file yang ada di dalam variabel bufferedWriter
    fwrite(bufferedWriter,sizeof(char),sizeof(bufferedWriter)/sizeof(char),fpw);

    //Menutup kembali file yang telah dibuka
    fclose(fpw);

    return 0;
}
