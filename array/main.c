#include <stdio.h>

void main()
{
   /*char huruf[5] = {'a', 'b','c','d','e'};
   printf("Huruf: %c\n", huruf[2]);*/

   //mengisi ulang data pada array
   /*char huruf[5] = {'a', 'b', 'c', 'd' , 'e'};

   //mengubah isi array
   huruf[2] = 'z';
   printf("Huruf: %c\n", huruf[2]);

   //membuat array kosong
   int nilai[5];

   //mengisi array
   nilai[0] = 32;
   nilai[1] = 42;
   nilai[2] = 76;
   nilai[3] = 31;
   nilai[4] = 57;

    printf("Nilai ke-1: %d\n", nilai[0]);
    printf("Nilai ke-2: %d\n", nilai[1]);
    printf("Nilai ke-3: %d\n", nilai[2]);
    printf("Nilai ke-4: %d\n", nilai[3]);
    printf("Nilai ke-4: %d\n", nilai[4]);*/

    /*
    int nilai[5];

    nilai[0] = 32;
    nilai[1] = 42;
    nilai[2] = 76;
    nilai[3] = 31;
    nilai[4] = 57;

    //syntax dibawah digunakan untuk menghitung jumlah data yang ada di array dan untuk membatasi agar tidak keluar dari data di dalam array itu sendiri
    //sizeof(nilai) ibaratkan syntax tersebut sebagai berat satu kotak
    //sizeof(*nilai) ibaratkan syntax tersebut sebagai berat satu permen
    //variable legth digunakan untuk menghitung jumlah data yang ada di array dengan membagi jumlah berat kotak dibagi dengan berat satu permen
    int legth = sizeof(nilai) / sizeof(*nilai);
    for(int i = 0; i < legth; i++){
        //syntax i + 1 digunakan untuk menggeser variable i yang semula 0 kemudian berubah nilai menjadi 1
        printf("Nilai ke - %d: %d\n",i + 1, nilai[i]);
    }*/

    /*
    //mengambil panjang array menggunakan sizeof()
    int nilai[5] = {33, 22, 11, 44, 21};

    //ukuran array dalam byte
    size_t size = sizeof(nilai);

    //banyaknya isi array
    int length = sizeof(nilai) / sizeof(*nilai);

    printf("Banyaknya isi array nilai: %i\n", length);
    printf("Ukuran array dalam byte: %zu\n", size);*/

    //menghitung rata2 dengan array

    /*int tinggi_badan[10] = {175, 165, 166, 157, 184, 163, 176, 171,169};

    //length itu sama dengan n
    int length = sizeof(tinggi_badan) / sizeof(*tinggi_badan);
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum += tinggi_badan[i];
    }
    //rata-rata tinggi badan

    float rata_rata = (float)sum / (float)length;

    printf("Rata-rata tinggi badan: %2f\n", rata_rata);*/

    //array multi dimensi
    /*int matriks[3][3] = {
            {1, 3, 5},
            {5, 3, 1},
            {6, 2, 3}
        };
        printf("Isi Data pada indeks ke-(1,0): %d\n", matriks[1][0]);*/
}
