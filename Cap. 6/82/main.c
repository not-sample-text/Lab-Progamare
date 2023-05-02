#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    float im;
    float re;
} complex;

// functie care returneaza suma a doua numere complexe
complex adunare(complex z1, complex z2)
{
    complex rez;
    rez.re = z1.re + z2.re;
    rez.im = z1.im + z2.im;
    return rez;
}

// functie care returneaza inmultirea a doua numere complexe
complex inmultire(complex z1, complex z2)
{
    complex rez;
    rez.re = z1.re * z2.re - z1.im * z2.im;
    rez.im = z1.re * z2.im + z1.im * z2.re;
    return rez;
}
int main()
{
    complex c1, c2, c_suma, c_prod;

    c1.im = 14;
    c1.re = 5.5;

    c2.im = 2;
    c2.re = 5.6;

    c_suma = adunare(c1, c2);
    printf("Suma dintre %.2f + i * %.2f si %.2f + i * %.2f este %.2f + i * %.2f\n",
           c1.re, c1.im, c2.re, c2.im, c_suma.re, c_suma.im);

    c_prod = inmultire(c1, c2);
    printf("Inmultirea dintre %.2f + i * %.2f si %.2f + i * %.2f este %.2f + i * %.2f\n",
           c1.re, c1.im, c2.re, c2.im, c_prod.re, c_prod.im);
    return 0;
}
