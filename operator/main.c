#include <stdio.h>

int main()
{
    int a, b, c;
    //float hasil_pembagian, hasil_pengurangan;

    printf("Inputkan nilai a: ");
    scanf("%i" ,&a);

    //printf("Inputkan nilai b: ");
    //scanf("%i", &b);

    /*c = a + b;

    printf("Hasil a + b: %i",c);8
//////////////////////////////////////////////////////
    printf("Hasil a + b: %i\n", a + b);
    printf("Hasil a - b: %i\n", a - b);
    printf("Hasil a * b: %i\n", a * b);
    printf("Hasil a / b: %i\n", a / b);
    printf("Hasil a %% b: %i\n", a % b);*/

    //pengisian sekaligus pengurangan
    /*b += a;//sama seperti b = b + a
    printf("Hasil b += a adalah %d\n", b);

    hasil_pengurangan = (float)b - (float)a;//sama seperti b = b - a
    printf("Hasil b -= a adalah %f\n", hasil_pengurangan);

    b *= a;//sama seperti b = b * a
    printf("Hasil b *= a adalah %d\n", b);

    hasil_pembagian = (float)b / (float)a;//sama seperti b = b / a
    printf("Hasil b /= a adalah %f\n", hasil_pembagian);

    b %= a;//sama seperti b = b + a
    printf("Hasil b %%= a adalah %d\n", b);*/
//////////////////////////////////////////////////////////////
    //Operator pembanding
    /*printf("a = %d\n", a);
    printf("b = %d\n", b);

    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);*/

    //Operator logika

    /*printf("a = %d\n", a);
    printf("b = %d\n", b);

    //logika AND
    printf("a && b = %d\n", a && b);

    //logika OR
    printf("a || b = %d\n", a || b);

    //logika NOT
    printf("!a = %d\n", !a);*/

    //bitwise AND

    /*printf("a & b = %d\n", a & b);

    //bitwise OR

    printf("a | b = %d\n", a | b);

    // bitwise XOR
    printf("a ^ b = %d\n", a ^ b);

    // bitwise NOT
    printf("~a = %d\n", ~a);

    //bitwise left shift
    printf("a << 1 = %d\n", a << 1);

    //bitwise right shift
    printf("a >> 1 = %d\n", a >> 1);*/

    //pointer atau berfungsi untuk membuat sebuah pointer
    //membuat pointer
    /*int *a = 5;

    //ambil alamat memori dari pointer a
    //bisa %x atau %p
    printf("alamat memori variable a adalah %p\n",&a);

    //contoh mengubah nilai suatu variable dengan menggunakan pointer

    int b = 7;
    int *ptr = &b;
    *ptr = 20;

    printf("nilai b setelah diubah = %d\n", b);

    //operator tenary seperti if/else
    printf("a > 1 adalah %s", a > 1 ? "benar" : "salah");*/

    //increment a
    a++;
    printf("a++ = %d\n", a);

    //increment a
    ++a;
    printf("++a = %d\n", a);

    //decrement a

    a--;
    printf("a-- = %d\n", a);

    //decrement a
    --a;
    printf("--a = %d\n", a);


}
