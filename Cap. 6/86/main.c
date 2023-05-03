#include <stdio.h>
#include <string.h>

#define MAX_PROD 100

struct Product
{
    char name[50];
    float price;
    int quantity;
};

struct Product products[MAX_PROD];
int num_products = 0;

void
addProduct ()
{
    if (num_products >= MAX_PROD)
    {
        printf ("Nu se pot adauga mai multe produse!\n");
        return;
    }

    struct Product new_product;
    printf ("Introduceti numele produsului: ");
    scanf ("%s", new_product.name);
    printf ("Introduceti pretul produsului: ");
    scanf ("%f", &new_product.price);
    printf ("Introduceti cantitatea disponibila: ");
    scanf ("%d", &new_product.quantity);

    products[num_products++] = new_product;
    printf ("Produsul a fost adaugat cu succes!\n");
}

void
removeProduct ()
{
    char name[50];
    printf ("Introduceti numele produsului de sters: ");
    scanf ("%s", name);

    int index = -1;
    for (int i = 0; i < num_products; i++)
    {
        if (strcmp (products[i].name, name) == 0)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf ("Produsul nu a fost gasit!\n");
        return;
    }

    for (int i = index; i < num_products - 1; i++)
    {
        products[i] = products[i + 1];
    }

    num_products--;
    printf ("Produsul a fost eliminat cu succes!\n");
}

void
searchProducts ()
{
    char query[50];
    printf ("Introduceti sirul de caractere pentru cautare: ");
    scanf ("%s", query);

    int count = 0;
    for (int i = 0; i < num_products; i++)
    {
        if (strstr (products[i].name, query) != NULL)
        {
            printf ("%s - %.2f lei - %d buc\n", products[i].name,
                    products[i].price, products[i].quantity);
            count++;
        }
    }

    if (count == 0)
    {
        printf ("Niciun produs nu a fost gasit!\n");
    }
}

void
printTotalValue ()
{
    float total_value = 0.0;
    for (int i = 0; i < num_products; i++)
    {
        total_value += products[i].price * products[i].quantity;
    }

    printf ("Valoarea totala a produselor in stoc este de: %.2f lei\n",
            total_value);
}

int
main ()
{
    int choice;
    do
    {
        printf ("\n\n1. Adauga produs\n");
        printf ("2. Sterge produs\n");
        printf ("3. Cauta produse\n");
        printf ("4. Afiseaza valoarea totala a produselor\n");
        printf ("0. Iesire\n");
        printf ("Introduceti optiunea dvs.: ");
        scanf ("%d", &choice);

        switch (choice)
        {
        case 1:
            addProduct ();
            break;
        case 2:
            removeProduct ();
            break;
        case 3:
            searchProducts ();
            break;
        case 4:
            printTotalValue ();
            break;
        case 0:
            printf ("La revedere!\n");
        default:
            printf
            ("Optiune invalida! Va rugam introduceti o optiune valida.\n");
            break;
        }
    }
    while (choice != 0);

    return 0;
}
