#include <stdio.h>

void main(){
    /*printf("== Program Pembayaran ==\n");
    int total_belanja = 0;

    printf("Inputkan total belanja: ");
    scanf("%i", &total_belanja);

     // menggunakan blok percabangan if
    if( total_belanja > 100000 ){
        printf("Selamat, Anda mendapatkan hadiah!\n");
    }
    //jikalau hanya satu statement saja bisa tdk memakai kurung kurawal
    if( total_belanja > 100000 )
        printf("Selamat, Anda mendapatkan hadiah!\n");

    printf("Terima kasih sudah berbelanja di toko kami\n\n"); */


    //if else decission

    //membuat array karakter untuk menyimpan password

    char password [30];

    printf("== program login ==\n");
    printf("Masukkan Password: ");
    scanf("%s", &password);

    //percabangan if else

    if(strcmp(password, "kopi") == 0){
        printf("Selamat datang bos!\n");
    }else{
        printf("Password salah silakan coba lagi!\n");
    }
    printf("Terimakasih sudah menggunakan aplikasi ini!\n");
}
