#include <stdio.h>

int
main ()
{
    int n[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, i;
    for (i = 0; i < 10; i++)
    {
        if (n[i] % 2 == 0)
        {
            printf ("[%d]", n[i]);
        }
        else
        {
            printf ("(%d)", n[i]);
        }
    }


    return 0;
}
