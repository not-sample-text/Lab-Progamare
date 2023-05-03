#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nume[30];
    char adresa[30];
    char parola[30];
} util;
int main()
{
    int i;
    util user[5];

    strcpy(user[0].nume, "Lugia");
    strcpy(user[1].nume, "Lopunny");
    strcpy(user[2].nume,  "Garchomp");

    strcpy(user[0].adresa, "Lugia");
    strcpy(user[1].adresa, "Lopunny");
    strcpy(user[2].adresa,  "Garchomp");

    strcpy(user[0].parola, "Lugia");
    strcpy(user[1].parola, "Lopunny");
    strcpy(user[2].parola,  "Garchomp");

    for(i=0; i < 3; i++)
    {
        if(strlen(user[i].parola) >= 8)
        {
            printf("Utilizatorul %s are parola mai mare decat 8 chars.", user[i].nume);
        }
    }
    return 0;
}
