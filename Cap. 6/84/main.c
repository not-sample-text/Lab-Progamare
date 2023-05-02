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
    info pers[5] = {"Pop Ghorghe", "0712345678", {"Cluj", "Principala", 8, 14}};
    int i;
    for(i = 0; i < 5; ++i){
    printf("%s poate fi contactat la nr. de tel %s, si locuieste in %s, str. %s, bl. %d, ap. %d.\n\n",
           pers[i].nume, pers[i].tel, pers[i].adresa.oras, pers[i].adresa.strada, pers[i].adresa.numar_bloc, pers[i].adresa.numar_apt);
    }
    return 0;
}
