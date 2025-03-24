#include <stdio.h>
#include <conio.h>

int main ()
{
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello world\n");

    printf("Masukkan Nama : ");
    gets(nama); //get string

    printf("Masukkan NIM : ");
    scanf("%d", &nim); //fungsi masukan pada c

    getchar();

    printf("Masukkan kom : ");
    gets(kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    /* untuk output */

    printf("Nama : ");
    puts(nama); //put string, untuk output string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom);

    printf("IP  : %f\n", ip);
}