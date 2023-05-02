#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char* nume;
    char* tel;
    struct
    {
        char* oras;
        char* strada;
        int numar_bloc;
        int numar_apt;
    } adresa;
} info;

int main()
{
    info pers1 = {"Pop Ghorghe", "0712345678", {"Cluj", "Principala", 8, 14}};
    printf("%s poate fi contactat la nr. de tel %s, si locuieste in %s, str. %s, bl. %d, ap. %d.",
           pers1.nume, pers1.tel, pers1.adresa.oras, pers1.adresa.strada, pers1.adresa.numar_bloc, pers1.adresa.numar_apt);
    return 0;
}
