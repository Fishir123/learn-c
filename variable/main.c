#include <stdio.h>
#define sebelas 50
#define versi 4.5
#define jenis_kelamin 'P'
int main()
{
    /*//membuat variable dengan tipe data integer
    int berat;
    //membuat variabel dan langsung mengisinya
    int tinggi = 170;
    //mengisi nilai ke variable
    berat = 70;
    //mencetak isi variable ke layar
    printf("berat badan saya %i dan tinggi %i", berat, tinggi);

    return 0;*/
    <------------------------------------------------------------------->
    /*//jenis2 tipe data
    int usia = 90;
    float berat = 45.2;
    double tinggi = 168.9;
    char jenis_kelamin = 'P';

    printf("Usia :%i tahun\n", usia);
    printf("Berat :%.2f kg\n",berat);
    printf("Tinggi : %.2f cm\n",tinggi);
    printf("Jenis kelamin : %c\n", jenis_kelamin);

    return 0;*/
    <------------------------------------------------------------------->
    /*//cara mengubah tipe data
    int a = 5;
    int b = 2;

    //mengubah tipe data integer menjadi float

    //float c = a / b;

    //jikalau ingin menampilkan hasil aslinya belum di bulatkan

    float c = (float) a/(float) b;

    printf("Hasil a/b : %.2f", c);
    return 0; */
    <------------------------------------------------------------------->
    //menambahkan const dan menampilkannya
    printf("isi konstanta sebelas adalah %d\n", sebelas);
    printf("isi konstanta versi adalah %.2f\n", versi);
    printf("isi konstanta sebelas adalah %c\n", jenis_kelamin);

    //bisa juga di tambahkan di dalam blok main
    const double PI = 3.14;
    const char JENIS_KELAMIN = 'P';
    const int VERSI = 11;

    printf("isi konstanta PI adalah %f\n", PI);
    printf("isi konstanta versi adalah %i\n", VERSI);
    printf("isi konstanta jenis kelamin adalah %c\n", JENIS_KELAMIN);


}
